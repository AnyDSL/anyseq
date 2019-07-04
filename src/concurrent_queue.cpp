/**
 * pure C interface to concurrent queues
 **/

#include <condition_variable>
#include <mutex>
#include <atomic>

#include "concurrent_queue.h"
#include "dynamic_matrix.h"
// #include "concurrent_queue_blocking.h"


extern "C" {

struct IterBlock {
    int idx0;
    int idx1;
    int start0;
    int start1;
    int size0;
    int size1;
};

}


//-----------------------------------------------------------------------------
class dependency_tracker
{
    enum class status { untouched = 0, queued = 1, complete = 2 };

    struct atomic_status {
        std::atomic<status> a_;

        atomic_status() noexcept : a_{status::untouched} {}

        atomic_status(const std::atomic<status>& a) noexcept : a_{a.load()} {}

        atomic_status(status s) noexcept : a_{s} {}

        atomic_status(const atomic_status& src) noexcept : a_{src.a_.load()} {}

        explicit operator status () const noexcept { return a_.load(); }

        atomic_status& operator = (const atomic_status& src) noexcept {
            a_.store(src.a_.load());
            return *this;
        }
    };

    using matrix_type = am::dynamic_matrix<atomic_status>;

public:
    using size_type  = matrix_type::size_type;
    
    dependency_tracker() = default;

    explicit
    dependency_tracker(size_type rows, size_type cols): m_{} {
        m_.resize(rows, cols, status::untouched);
    }

    void mark_scheduled(size_type row, size_type col) {
        m_(row, col) = status::complete; 
    }

    void mark_complete(size_type row, size_type col) {
        m_(row, col) = status::queued; 
    }

    bool is_complete(size_type row, size_type col) const noexcept {
        return status(m_(row,col)) == status::complete;
    }

    bool is_queued(size_type row, size_type col) const noexcept {
        return status(m_(row,col)) == status::queued;
    }

    bool is_untouched(size_type row, size_type col) const noexcept {
        return status(m_(row,col)) == status::untouched;
    }

private:
    matrix_type m_;
};


//-----------------------------------------------------------------------------
// global state
//-----------------------------------------------------------------------------
using queue_type = moodycamel::ConcurrentQueue<IterBlock>;
// using queue_type = moodycamel::BlockintConcurrentQueue<IterBlock>;

int batchSize = 8;
std::atomic<bool> completed {false};

std::mutex batchMtx;
std::mutex completeMtx;
std::condition_variable batchReadyCond;
std::condition_variable completeCond;
dependency_tracker dependencies;
queue_type queue;

inline bool batch_ready() {
    return int(queue.size_approx()) >= batchSize;
}


extern "C" {

//-----------------------------------------------------------------------------
void initialize_queue(int batch_size, int blocks0, int blocks1) 
{
    if(batch_size > 0) {
        batchSize = batch_size;
    }
    queue = queue_type{};
    dependencies = dependency_tracker(blocks0,blocks1);
}

void finalize_queue() {}


//-----------------------------------------------------------------------------
void mark_complete(int x, int y) {
    dependencies.mark_complete(x,y);
}

int is_complete(int x, int y) {
    return int(dependencies.is_complete(x,y));
}
int is_queued(int x, int y) {
    return int(dependencies.is_queued(x,y));
}
int is_untouched(int x, int y) {
    return int(dependencies.is_untouched(x,y));
}


void signal_all_complete() {
    completed.store(true);
}

int all_complete() {
    return int(completed.load());
}


//-----------------------------------------------------------------------------
// allocates more memory if necessary
int enqueue_single(const IterBlock* item) 
{
    bool success = queue.enqueue(*item);

    if(success && batch_ready()) {
        batchReadyCond.notify_one();
    }
    return int(success);
}

int enqueue_bulk(const IterBlock* items, int n)
{
    bool success = queue.enqueue_bulk(items, n);

    if(success && batch_ready()) {
        batchReadyCond.notify_one();
    }
    return int(success);
}


//-----------------------------------------------------------------------------
// fails if not enough memory to enqueue
int try_enqueue_single(const IterBlock* item) 
{
    bool success = queue.try_enqueue(*item);

    if(success && batch_ready()) {
        batchReadyCond.notify_one();
    }
    return int(success);
}

int try_enqueue_bulk(const IterBlock* items, int n)
{
    bool success = queue.try_enqueue_bulk(items, n);

    if(success && batch_ready()) {
        batchReadyCond.notify_one();
    }
    return int(success);
}


//-----------------------------------------------------------------------------
// attempts to dequeue from the queue (never allocates)
int try_dequeue_single(IterBlock* item)
{
    return queue.try_dequeue(*item);
}

// returns actual count of dequeued items
int try_dequeue_bulk(IterBlock* items, int n)
{
    return queue.try_dequeue_bulk(items, n);
}


//-----------------------------------------------------------------------------
int queue_approx_size() {
    return int(queue.size_approx());
}


//-----------------------------------------------------------------------------
void wait_until_batch_ready() 
{
    std::unique_lock<std::mutex> lock {batchMtx};
    
    while(!batch_ready()) {
        batchReadyCond.wait(lock);
    }
}


//-----------------------------------------------------------------------------
void wait_until_complete() 
{
    std::unique_lock<std::mutex> lock {completeMtx};
    
    while(!completed.load()) {
        completeCond.wait(lock);
    }
}


} // extern "C"

