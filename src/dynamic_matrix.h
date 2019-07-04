/*****************************************************************************
 *
 * AM utilities
 *
 * released under MIT license
 *
 * 2008-2017 André Müller
 *
 *****************************************************************************/

#ifndef AM_CONTAINERS_DYNAMIC_MATRIX_H_
#define AM_CONTAINERS_DYNAMIC_MATRIX_H_

#include <type_traits>
#include <iterator>
#include <memory>
#include <exception>
#include <utility>


namespace am {


/*****************************************************************************
 *
 * EXCEPTIONS
 *
 *****************************************************************************/
struct dynamic_matrix_init_incoherent_row_sizes :
    public std::exception
{};







/*************************************************************************//***
 *
 * @brief dynamically resizable 2-dimensional array
 *        has a similar growth policy as std::vector
 *
 * TODO am::dynamic_matrix relies on ValueType beeing CopyConstructible
 *
 *
 *
 *****************************************************************************/
template<class ValueType, class Allocator = std::allocator<ValueType>>
class dynamic_matrix
{
    using alloc_traits = std::allocator_traits<Allocator>;


    /*************************************************************************
     *
     *
     *************************************************************************/
    template<class T>
    class stride_iter_t_
    {
        friend class dynamic_matrix;
    public:
        //---------------------------------------------------------------
        using iterator_category = std::random_access_iterator_tag;
        using value_type = typename std::remove_const<T>::type;
        using pointer = T*;
        using reference = T&;
        using difference_type = std::ptrdiff_t;

        //---------------------------------------------------------------
        explicit constexpr
        stride_iter_t_() noexcept :
            p_(nullptr), stride_{0}
        {}

    private:
        //---------------------------------------------------------------
        explicit constexpr
        stride_iter_t_(pointer p, std::size_t stride = 0) noexcept :
            p_(p), stride_{static_cast<difference_type>(stride)}
        {}

    public:

        //---------------------------------------------------------------
        decltype(auto)
        operator *() const noexcept {
            return (*p_);
        }
        //-----------------------------------------------------
        decltype(auto)
        operator ->() const noexcept {
            return (p_);
        }

        //-----------------------------------------------------
        decltype(auto)
        operator [] (difference_type i) const noexcept {
            return *(p_ + (stride_ * i));
        }


        //---------------------------------------------------------------
        stride_iter_t_&
        operator ++ () noexcept {
            p_ += stride_;
            return *this;
        }
        stride_iter_t_
        operator ++ (int) noexcept {
            stride_iter_t_ old{*this};
            ++*this;
            return old;
        }
        stride_iter_t_&
        operator += (difference_type i) noexcept {
            p_ += (stride_ * i);
            return *this;
        }
        stride_iter_t_
        operator + (difference_type i) const noexcept {
            return stride_iter_t_{p_ + (stride_ * i), stride_};
        }
        //-----------------------------------------------------
        stride_iter_t_&
        operator -- () noexcept {
            p_ -= stride_;
            return *this;
        }
        stride_iter_t_
        operator -- (int) noexcept {
            stride_iter_t_ old{*this};
            --*this;
            return old;
        }
        stride_iter_t_&
        operator -= (difference_type i) noexcept {
            p_ -= (stride_ * i);
            return *this;
        }
        stride_iter_t_
        operator - (difference_type i) const noexcept {
            return stride_iter_t_{p_ - (stride_ * i), stride_};
        }

        //---------------------------------------------------------------
        explicit
        operator pointer () const noexcept {
            return p_;
        }

        //---------------------------------------------------------------
        bool operator ==(const stride_iter_t_& other) const noexcept {
            return (p_ == other.p_);
        }
        bool operator !=(const stride_iter_t_& other) const noexcept {
            return (p_ != other.p_);
        }
        bool operator < (const stride_iter_t_& other) const noexcept {
            return (p_ < other.p_);
        }
        bool operator <=(const stride_iter_t_& other) const noexcept {
            return (p_ <= other.p_);
        }
        bool operator > (const stride_iter_t_& other) const noexcept {
            return (p_ > other.p_);
        }
        bool operator >=(const stride_iter_t_& other) const noexcept {
            return (p_ >= other.p_);
        }

    private:
        pointer p_;
        difference_type stride_;
    };


    //---------------------------------------------------------------
    template<class T>
    struct rectangular_range_t_
    {
        //-----------------------------------------------------
        using value_type = typename std::remove_const<T>::type;
        using pointer = T*;
        using reference = T&;
        using difference_type = std::ptrdiff_t;

        //--------------------------------------------------------
        class iterator
        {
        public:
            //-----------------------------------------------------
            using iterator_category = std::forward_iterator_tag;
            using value_type = typename std::remove_const<T>::type;
            using pointer = T*;
            using reference = T&;
            using difference_type = std::ptrdiff_t;

            //-----------------------------------------------------
            explicit constexpr
            iterator(
                pointer p = nullptr,
                difference_type length = 0, difference_type stride = 0) noexcept
            :
                p_{p}, count_(0), length_(length), stride_(stride)
            {}


            //-----------------------------------------------------
            decltype(auto)
            operator *() const noexcept {
                return (*p_);
            }
            //-----------------------------------------------------
            decltype(auto)
            operator ->() const noexcept {
                return (p_);
            }

            //-----------------------------------------------------
            iterator&
            operator ++ () noexcept {
                ++p_;
                ++count_;
                if(count_ >= length_) {
                    count_ = 0;
                    p_ += stride_;
                }
                return *this;
            }
            //-----------------------------------------------------
            iterator
            operator ++ (int) noexcept {
                auto old(*this);
                ++*this;
                return old;
            }

            //---------------------------------------------------------------
            explicit
            operator pointer () const noexcept {
                return p_;
            }

            //-----------------------------------------------------
            bool operator == (const iterator& other) const noexcept {
                return (p_ == other.p_);
            }
            bool operator != (const iterator& other) const noexcept {
                return (p_ != other.p_);
            }

        private:
            pointer p_;
            difference_type count_, length_, stride_;
        };


        //---------------------------------------------------------------
        explicit constexpr
        rectangular_range_t_(
            pointer pbeg = nullptr, pointer pend = nullptr,
            difference_type length = 0, difference_type stride = 0) noexcept
        :
            pbeg_{pbeg}, pend_{pend}, length_(length), stride_(stride)
        {}

        //-----------------------------------------------------
        constexpr iterator
        begin() const noexcept {
            return iterator{pbeg_, length_, stride_};
        }

        //-----------------------------------------------------
        constexpr iterator
        end() const noexcept {
            return iterator{pend_};
        }


    private:
        pointer pbeg_, pend_;
        difference_type length_, stride_;
    };


    //---------------------------------------------------------------
    /**
     * @brief range definition helper
     */
    template<class Iterator, class SizeT>
    class iter_range_t_
    {
    public:
        using iterator = Iterator;
        using value_type = typename
            std::decay<decltype(*std::declval<iterator>())>::type;

        using size_type = SizeT;

        iter_range_t_() = default;

        constexpr explicit
        iter_range_t_(iterator it) noexcept : beg_{it}, end_{it} {}

        constexpr explicit
        iter_range_t_(iterator beg, iterator end) noexcept : beg_{beg}, end_{end} {}

        constexpr iterator begin() const noexcept { return beg_; }
        constexpr iterator end()   const noexcept { return end_; }

        //---------------------------------------------------------------
        decltype(auto) operator [] (size_type i) noexcept { return beg_[i]; }
        decltype(auto) operator [] (size_type i) const noexcept { return beg_[i]; }

        //---------------------------------------------------------------
        bool empty() const noexcept { return (beg_ == end_); }
        explicit operator bool() const noexcept { return !empty(); }

        bool operator == (const iter_range_t_& other) const noexcept {
            return (beg_ == other.beg_) && (end_ == other.end_);
        }
        bool operator != (const iter_range_t_& other) const noexcept {
            return !(*this == other);
        }

        size_type size() const noexcept {
            using std::distance;
            return distance(beg_, end_);
        }

    private:
        iterator beg_;
        iterator end_;
    };


public:
    //---------------------------------------------------------------
    // TYPES
    //---------------------------------------------------------------
    using value_type     = ValueType;
    using allocator_type = Allocator;
    //-----------------------------------------------------
    using reference       = ValueType&;
    using const_reference = const ValueType&;
    //-----------------------------------------------------
    using pointer         = ValueType*;
    using const_pointer   = const ValueType*;
    //-----------------------------------------------------
    using iterator        = pointer;
    using const_iterator  = const_pointer;
    //-----------------------------------------------------
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;
    //-----------------------------------------------------
    using row_iterator       = pointer;
    using const_row_iterator = const_pointer;
    //-----------------------------------------------------
    using col_iterator       = stride_iter_t_<value_type>;
    using const_col_iterator = stride_iter_t_<const value_type>;
    //-----------------------------------------------------
    using rectangular_range       = rectangular_range_t_<value_type>;
    using const_rectangular_range = rectangular_range_t_<const value_type>;
    //-----------------------------------------------------
    using size_type       = std::size_t;
    using difference_type = std::ptrdiff_t;
    //-----------------------------------------------------
    using row_range        = iter_range_t_<row_iterator,size_type>;
    using const_row_range  = iter_range_t_<const_row_iterator,size_type>;
    //-----------------------------------------------------
    using col_range        = iter_range_t_<col_iterator,size_type>;
    using const_col_range  = iter_range_t_<const_col_iterator,size_type>;


    //---------------------------------------------------------------
    // CONSTRUCTION / DESTRUCTION
    //---------------------------------------------------------------
    /// @brief default constructor
    explicit constexpr
    dynamic_matrix():
        rows_{0}, cols_{0},
        first_{nullptr}, last_{nullptr}, memEnd_{nullptr},
        alloc_{}
    {}

    //-----------------------------------------------------
    /// @brief initializer list constructor
    dynamic_matrix(std::initializer_list<value_type> il):
        rows_{static_cast<size_type>(il.size() > 0 ? 1 : 0)},
        cols_{il.size()},
        first_{nullptr}, last_{nullptr}, memEnd_{nullptr},
        alloc_{}
    {
        //initial capacity will be exactly the same as size
        auto totSize = rows_ * cols_;
        if(totSize > 0) {
            //reserve memory
            first_ = alloc_traits::allocate(alloc_,totSize);
            last_ = first_;
            memEnd_ = first_ + totSize;
            //contruct elements in-place
            for(auto i = il.begin(), e = il.end(); i != e; ++i) {
                alloc_traits::construct(alloc_, last_, *i);
                ++last_;
            }
        }
    }

    //-----------------------------------------------------
    /// @brief initializer list constructor
    dynamic_matrix(std::initializer_list<std::initializer_list<value_type>> il):
        rows_{il.size()},
        cols_{rows_ > 0 ? (il.begin())->size() : size_type(0)},
        first_{nullptr}, last_{nullptr}, memEnd_{nullptr},
        alloc_{}
    {
        //check row sizes
        #ifdef AM_USE_EXCEPTIONS
        for(auto i = il.begin(), e = il.end(); i != e; ++i) {
            if(i->size() != cols_) {
                throw dynamic_matrix_init_incoherent_row_sizes{};
            }
        }
        #endif
        //initial capacity will be exactly the same as size
        auto totSize = rows_ * cols_;
        if(totSize > 0) {
            //reserve memory
            first_ = alloc_traits::allocate(alloc_,totSize);
            last_ = first_;
            memEnd_ = first_ + totSize;
            //contruct elements in-place
            for(auto i = il.begin(), e = il.end(); i != e; ++i) {
                for(auto i2 = i->begin(), e2 = i->end(); i2 != e2; ++i2) {
                    alloc_traits::construct(alloc_, last_, *i2);
                    ++last_;
                }
            }
        }
    }

    //-----------------------------------------------------
    /// @brief copy constructor
    /// @details delegates to special private constructor
    dynamic_matrix(const dynamic_matrix& o):
        dynamic_matrix(o, o.size())
    {}

    //-----------------------------------------------------
    /// @brief move constructor
    dynamic_matrix(dynamic_matrix&& o) noexcept :
        rows_{o.rows_}, cols_{o.cols_},
        first_{o.first_}, last_{o.last_}, memEnd_{o.memEnd_},
        alloc_{o.alloc_}
    {
        o.cols_ = 0;
        o.rows_ = 0;
        o.first_ = nullptr;
        o.last_ = nullptr;
        o.memEnd_ = nullptr;
    }

    //---------------------------------------------------------------
    ~dynamic_matrix() {
        mem_erase();
    }


    //---------------------------------------------------------------
    // ASSIGNMENT
    //---------------------------------------------------------------
    dynamic_matrix&
    operator = (const dynamic_matrix& source) {
        if(this != &source) {
            dynamic_matrix temp{source};
            swap(*this,temp);
        }
        return *this;
    }
    //-----------------------------------------------------
    dynamic_matrix&
    operator = (dynamic_matrix&& source) noexcept {
        if(this != &source) {
            swap(source, *this);
        }
        return *this;
    }

    //---------------------------------------------------------------
    void
    fill(const value_type& value)
    {
        std::fill(begin(), end(), value);
    }
    //-----------------------------------------------------
    void
    fill_row(size_type index, const value_type& value)
    {
        std::fill(begin_row(index), end_row(index), value);
    }
    //-----------------------------------------------------
    void
    fill_col(size_type index, const value_type& value)
    {
        std::fill(begin_col(index), end_col(index), value);
    }


    //---------------------------------------------------------------
    // SET SIZE
    //---------------------------------------------------------------
    void
    rows(size_type numRows)
    {
        if(rows_ == numRows) return;

        if(numRows == 0) {
            clear();
        } else {
            if(cols_ < 1) cols_ = 1;
            mem_resize(numRows * cols_);
            rows_ = numRows;
        }
    }
    //-----------------------------------------------------
    void
    rows(size_type numRows, const value_type& value)
    {
        if(rows_ == numRows) return;

        if(numRows == 0) {
            clear();
        } else {
            if(cols_ < 1) cols_ = 1;
            mem_resize(numRows * cols_, value);
            rows_ = numRows;
        }
    }

    //-----------------------------------------------------
    void
    cols(size_type numCols)
    {
        if(cols_ == numCols) return;

        if(numCols < cols_) {
            mem_erase_cols(numCols, cols_-1);
        }
        else {
            if(rows_ < 1) rows_ = 1;
            mem_insert_cols(cols_, numCols - cols_);
        }
    }
    //-----------------------------------------------------
    void
    cols(size_type numCols, const value_type& value)
    {
        if(cols_ == numCols) return;

        if(numCols < cols_) {
            mem_erase_cols(numCols, cols_-1);
        }
        else {
            if(rows_ < 1) rows_ = 1;

            auto oldCols = cols_;
            mem_insert_cols(cols_, numCols - cols_);

            for(size_type i = oldCols; i < numCols; ++i) {
                fill_col(i, value);
            }
        }
    }

    //-----------------------------------------------------
    void
    resize(size_type numRows, size_type numCols)
    {
        if((numRows < 1) || (numCols < 1)) {
            clear();
        }
        else if((numRows == 1) || (numCols == 1)) {
            dynamic_matrix temp(numRows,numCols);
            swap(*this,temp);
        }
        else {
            reserve(numRows, numCols);
            cols(numCols);
            rows(numRows);
        }
    }
    //-----------------------------------------------------
    void
    resize(size_type numRows, size_type numCols, const value_type& value)
    {
        if((numRows < 1) || (numCols < 1)) {
            clear();
        }
        else if((numRows == 1) || (numCols == 1)) {
            dynamic_matrix temp(numRows,numCols,value);
            swap(*this,temp);
        }
        else {
            reserve(numRows, numCols);
            cols(numCols, value);
            rows(numRows, value);
        }
    }

    //-----------------------------------------------------
    void
    reserve(size_type numRows, size_type numCols)
    {
        mem_reserve(numRows * numCols);
    }


    //---------------------------------------------------------------
    // INSERT
    //---------------------------------------------------------------
    /// @brief returns valid iterator to the newly inserted col
    col_iterator
    insert_col(size_type index) {
        insert_cols(index, 1);
        return begin_col(index);
    }
    //-----------------------------------------------------
    /// @brief returns valid iterator to the newly inserted col
    col_iterator
    insert_col(size_type index, const value_type& value) {
        insert_cols(index, 1, value);
        return begin_col(index);
    }

    //-----------------------------------------------------
    /// @brief returns valid iterator to the newly inserted row
    row_iterator
    insert_row(size_type index) {
        insert_rows(index, 1);
        return begin_row(index);
    }
    //-----------------------------------------------------
    /// @brief returns valid iterator to the newly inserted row
    row_iterator
    insert_row(size_type index, const value_type& value) {
        insert_rows(index, 1, value);
        return begin_row(index);
    }

    //-----------------------------------------------------
    /// @brief returns valid iterator to the first of the newly inserted cols
    col_iterator
    insert_cols(size_type index, size_type quantity)
    {
        if(rows_ < 1) {
            resize(1,quantity);
            begin_col(0);
        }
        else {
            mem_insert_cols(index,quantity);
        }
        return begin_col(index);
    }
    //-----------------------------------------------------
    /// @brief returns valid iterator to the first of the newly inserted cols
    col_iterator
    insert_cols(size_type index, size_type quantity, const value_type& value)
    {
        if(rows_ < 1) {
            resize(1,quantity,value);
        }
        else {
            mem_insert_cols(index,quantity);

            for(auto i = index, e = index+quantity; i < e; ++i)
                fill_col(i, value);
        }
        return begin_col(index);
    }

    //-----------------------------------------------------
    /// @brief returns valid iterator to the first of the newly inserted rows
    row_iterator
    insert_rows(size_type index, size_type quantity)
    {
        if(cols_ < 1) {
            resize(quantity,1);
        }
        else {
            mem_insert_rows(index,quantity);
        }
        return begin_row(index);
    }
    //-----------------------------------------------------
    /// @brief returns valid iterator to the first of the newly inserted rows
    row_iterator
    insert_rows(size_type index, size_type quantity, const value_type& value)
    {
        if(cols_ < 1) {
            resize(quantity,1,value);
        }
        else {
            mem_insert_rows(index,quantity);

            for(auto i = index, e = index+quantity; i < e; ++i)
                fill_row(i, value);
        }
        return begin_row(index);
    }


    //---------------------------------------------------------------
    // REMOVE
    //---------------------------------------------------------------
    void
    erase_col(size_type idx) {
        mem_erase_cols(idx,idx);
    }
    //-----------------------------------------------------
    void
    erase_row(size_type idx) {
        mem_erase_rows(idx,idx);
    }

    //-----------------------------------------------------
    void
    erase_cols(size_type first, size_type last) {
        mem_erase_cols(first,last);
    }
    //-----------------------------------------------------
    void
    erase_rows(size_type first, size_type last) {
        mem_erase_rows(first,last);
    }

    //-----------------------------------------------------
    void
    clear() {
        rows_ = 0;
        cols_ = 0;
        mem_destroy_content();
    }


    //---------------------------------------------------------------
    // ALTER DATA
    //---------------------------------------------------------------
    void
    swap_rows(size_type r1, size_type r2) {
        std::swap_ranges(begin_row(r1), end_row(r1), begin_row(r2));
    }
    //-----------------------------------------------------
    void
    swap_cols(size_type c1, size_type c2) {
        std::swap_ranges(begin_col(c1), end_col(c1), begin_col(c2));
    }


    //---------------------------------------------------------------
    // ACCESS
    //---------------------------------------------------------------
    reference
    operator () (size_type row, size_type col) noexcept {
        return first_[row*cols_+col];
    }
    //-----------------------------------------------------
    const_reference
    operator () (size_type row, size_type col) const noexcept {
        return first_[row*cols_+col];
    }

    //-----------------------------------------------------
    row_range
    operator [] (size_type index) noexcept {
        return row_range{begin_row(index), end_row(index)};
    }
    //-----------------------------------------------------
    const_row_range
    operator [] (size_type index) const noexcept {
        return const_row_range{begin_row(index), end_row(index)};
    }


    //---------------------------------------------------------------
    // INDEX QUERIES
    //---------------------------------------------------------------
    size_type
    row_index_of(const_iterator it) const noexcept {
        using std::distance;
        return static_cast<size_type>(distance(begin(), it)) / cols_;
    }
    //-----------------------------------------------------
    size_type
    col_index_of(const_iterator it) const noexcept {
        using std::distance;
        return static_cast<size_type>(distance(begin(), it)) % cols_;
    }

    //---------------------------------------------------------------
    std::pair<size_type,size_type>
    index_of(const_iterator i) const noexcept {
        using std::distance;

        const auto n = static_cast<size_type>(distance(begin(), i));
        const auto r = static_cast<size_type>(n / cols_);

        return {r, static_cast<size_type>(n-(r*cols_))};
    }


    //---------------------------------------------------------------
    // SIZE PROPERTIES
    //---------------------------------------------------------------
    size_type
    rows() const noexcept {
        return rows_;
    }
    size_type
    cols() const noexcept {
        return cols_;
    }
    //-----------------------------------------------------
    size_type
    size() const noexcept {
        using std::distance;
        return distance(first_, last_);
    }
    //-----------------------------------------------------
    size_type
    max_size() const noexcept {
        return alloc_traits::max_size(alloc_);
    }
    //-----------------------------------------------------
    size_type
    capacity() const noexcept {
        using std::distance;
        return distance(first_, memEnd_);
    }
    //-----------------------------------------------------
    bool
    empty() const noexcept {
        return (first_ == last_);
    }
    //-----------------------------------------------------
    bool
    is_square() const noexcept {
        return (rows_ == cols_);
    }


    //---------------------------------------------------------------
    // SEQUENTIAL ITERATORS
    //---------------------------------------------------------------
    iterator
    begin() noexcept {
        return first_;
    }
    const_iterator
    begin() const noexcept {
        return first_;
    }
    const_iterator
    cbegin() const noexcept {
        return first_;
    }
    //-----------------------------------------------------
    friend iterator
    begin(dynamic_matrix& m) noexcept {
        return m.first_;
    }
    friend const_iterator
    begin(const dynamic_matrix& m) noexcept {
        return m.first_;
    }
    friend const_iterator
    cbegin(const dynamic_matrix& m) noexcept {
        return m.first_;
    }
    //-----------------------------------------------------
    iterator
    begin(size_type row, size_type col) noexcept {
        return ptr(row,col);
    }
    //-----------------------------------------------------
    const_iterator
    begin(size_type row, size_type col) const noexcept {
        return ptr(row,col);
    }
    //-----------------------------------------------------
    const_iterator
    cbegin(size_type row, size_type col) const noexcept {
        return ptr(row,col);
    }

    //-----------------------------------------------------
    iterator
    end() noexcept {
        return last_;
    }
    const_iterator
    end() const noexcept {
        return last_;
    }
    const_iterator
    cend() const noexcept {
        return last_;
    }
    //-----------------------------------------------------
    iterator
    end(dynamic_matrix& m) noexcept {
        return m.last_;
    }
    const_iterator
    end(const dynamic_matrix& m) noexcept {
        return m.last_;
    }
    const_iterator
    cend(const dynamic_matrix& m) noexcept {
        return m.last_;
    }


    //---------------------------------------------------------------
    // REVERSE SEQUENTIAL ITERATORS
    //---------------------------------------------------------------
    reverse_iterator
    rbegin() noexcept {
        return (last_);
    }
    const_reverse_iterator
    rbegin() const noexcept {
        return (last_);
    }
    const_reverse_iterator
    crbegin() const noexcept {
        return (last_);
    }
    //-----------------------------------------------------
    friend reverse_iterator
    rbegin(dynamic_matrix& m) noexcept {
        return (m.last_);
    }
    friend const_reverse_iterator
    rbegin(const dynamic_matrix& m) noexcept {
        return (m.last_);
    }
    friend const_reverse_iterator
    crbegin(const dynamic_matrix& m) noexcept {
        return (m.last_);
    }

    //-----------------------------------------------------
    reverse_iterator
    rend() noexcept {
        return first_;
    }
    const_reverse_iterator
    rend() const noexcept {
        return first_;
    }
    const_reverse_iterator
    crend() const noexcept {
        return first_;
    }
    //-----------------------------------------------------
    friend reverse_iterator
    rend(dynamic_matrix& m) noexcept {
        return m.first_;
    }
    friend const_reverse_iterator
    rend(const dynamic_matrix& m) noexcept {
        return m.first_;
    }
    friend const_reverse_iterator
    crend(const dynamic_matrix& m) noexcept {
        return m.first_;
    }


    //---------------------------------------------------------------
    // ROW ITERATORS
    //---------------------------------------------------------------
    row_iterator
    begin_row(size_type row) noexcept {
        return ptr(row,0);
    }
    //-----------------------------------------------------
    const_row_iterator
    begin_row(size_type row) const noexcept {
        return ptr(row,0);
    }
    //-----------------------------------------------------
    const_row_iterator
    cbegin_row(size_type row) const noexcept {
        return ptr(row,0);
    }

    //-----------------------------------------------------
    row_iterator
    end_row(size_type row) noexcept {
        return ptr(row+1,0);
    }
    //-----------------------------------------------------
    const_row_iterator
    end_row(size_type row) const noexcept {
        return ptr(row+1,0);
    }
    //-----------------------------------------------------
    const_row_iterator
    cend_row(size_type row) const noexcept {
        return ptr(row+1,0);
    }

    //-----------------------------------------------------
    row_range
    row(size_type index) noexcept {
        return row_range{begin_row(index), end_row(index)};
    }
    //-----------------------------------------------------
    const_row_range
    row(size_type index) const noexcept {
        return const_row_range{begin_row(index), end_row(index)};
    }
    //-----------------------------------------------------
    const_row_range
    crow(size_type index) const noexcept {
        return const_row_range{begin_row(index), end_row(index)};
    }


    //---------------------------------------------------------------
    // COLUMN ITERATORS
    //---------------------------------------------------------------
    col_iterator
    begin_col(size_type col) noexcept {
        return col_iterator{first_ + col, cols_};
    }
    //-----------------------------------------------------
    const_col_iterator
    begin_col(size_type col) const noexcept {
        return const_col_iterator{first_ + col, cols_};
    }
    //-----------------------------------------------------
    const_col_iterator
    cbegin_col(size_type col) const noexcept {
        return const_col_iterator{first_ + col, cols_};
    }

    //-----------------------------------------------------
    col_iterator
    end_col(size_type col) noexcept {
        return col_iterator{first_ + col + size()};
    }
    //-----------------------------------------------------
    const_col_iterator
    end_col(size_type col) const noexcept {
        return const_col_iterator{first_ + col + size()};
    }
    //-----------------------------------------------------
    const_col_iterator
    cend_col(size_type col) const noexcept {
        return const_col_iterator{first_ + col + size()};
    }

    //-----------------------------------------------------
    col_range
    col(size_type index) noexcept {
        return col_range{begin_col(index), end_col(index)};
    }
    //-----------------------------------------------------
    const_col_range
    col(size_type index) const noexcept {
        return const_col_range{begin_col(index), end_col(index)};
    }
    //-----------------------------------------------------
    const_col_range
    ccol(size_type index) const noexcept {
        return const_col_range{begin_col(index), end_col(index)};
    }


    //---------------------------------------------------------------
    // SECTIONS
    //---------------------------------------------------------------
    rectangular_range
    rectangle(
        size_type firstRow, size_type firstCol,
        size_type lastRow,  size_type lastCol) noexcept
    {
        const auto stride = difference_type(cols_ -  lastCol - 1 + firstCol);

        return rectangular_range{
            ptr(firstRow,firstCol),
            ptr(lastRow,lastCol) + stride + 1,
            difference_type(lastCol - firstCol + 1),
            stride };
    }
    //-----------------------------------------------------
    const_rectangular_range
    rectangle(
        size_type firstRow, size_type firstCol,
        size_type lastRow,  size_type lastCol) const noexcept
    {
        const auto stride = difference_type(cols_ -  lastCol - 1 + firstCol);

        return const_rectangular_range{
            ptr(firstRow,firstCol),
            ptr(lastRow,lastCol) + stride + 1,
            difference_type(lastCol - firstCol + 1),
            stride };
    }
    //-----------------------------------------------------
    const_rectangular_range
    crectangle(
        size_type firstRow, size_type firstCol,
        size_type lastRow,  size_type lastCol) const noexcept
    {
        const auto stride = difference_type(cols_ -  lastCol - 1 + firstCol);

        return const_rectangular_range{
            ptr(firstRow,firstCol),
            ptr(lastRow,lastCol) + stride + 1,
            difference_type(lastCol - firstCol + 1),
            stride };
    }


    //---------------------------------------------------------------
    friend void
    swap(dynamic_matrix& a, dynamic_matrix& b) noexcept
    {
        using std::swap;

        swap(a.rows_,   b.rows_);
        swap(a.cols_,   b.cols_);
        swap(a.first_,  b.first_);
        swap(a.last_,   b.last_);
        swap(a.memEnd_, b.memEnd_);
        swap(a.alloc_,  b.alloc_);
    }


    //---------------------------------------------------------------
    const allocator_type&
    get_allocator() const noexcept {
        return alloc_;
    }


    //---------------------------------------------------------------
    // I/O
    //---------------------------------------------------------------
    template<class Ostream>
    inline friend Ostream&
    operator << (Ostream& os, const dynamic_matrix& o)
    {
        os << o.rows_ <<' '<< o.cols_ << '\n';
        if(o.rows_ < 1 || o.cols_ < 1) return os;
        for(size_type r = 0; r < o.rows_-1; ++r) {
            for(size_type c = 0; c < o.cols_-1; ++c)
                os << o.first_[r*o.cols_+c] << ' ';
            os << o.first_[(r+1)*o.cols_-1] << '\n';
        }
        for(size_type c = 0; c < o.cols_-1; ++c)
            os << o.first_[(o.rows_-1)*o.cols_+c] << ' ';
        os << o.first_[o.rows_*o.cols_-1];
        return os;
    }


private:
    //---------------------------------------------------------------
    explicit
    dynamic_matrix(const dynamic_matrix& o, size_type capacity):
        rows_{o.rows_}, cols_{o.cols_},
        first_{nullptr}, last_{nullptr}, memEnd_{nullptr},
        alloc_{alloc_traits::select_on_container_copy_construction(o.alloc_)}
    {
        if(capacity > 0) {
            first_ = alloc_traits::allocate(alloc_,capacity);
            memEnd_ = first_ + capacity;
            last_ = first_;

            for(auto s = o.first_; s < o.last_; ++s, ++last_)
                alloc_traits::construct(alloc_, last_, *s);
        }
    }
    //-----------------------------------------------------
    template<class... Args>
    explicit
    dynamic_matrix(size_type rows, size_type cols, Args&&... args):
        rows_{rows}, cols_{cols},
        first_{nullptr}, last_{nullptr}, memEnd_{nullptr},
        alloc_{}
    {
        //initial capacity will be exactly the same as size
        auto totSize = rows_ * cols_;
        if(totSize > 0) {
            //reserve memory
            first_ = alloc_traits::allocate(alloc_,totSize);
            memEnd_ = first_ + totSize;
            //default-contruct elements in-place
            for(last_ = first_; last_ < memEnd_; ++last_)
                alloc_traits::construct(alloc_, last_,
                    std::forward<Args>(args)...);
        }
    }

    //---------------------------------------------------------------
    void
    mem_destroy_content() {
        if(!first_ || !last_) return;

        --last_;
        for(; last_ >= first_; --last_) {
            alloc_traits::destroy(alloc_, last_);
        }
        ++last_;
    }
    //---------------------------------------------------------------
    void
    mem_reserve(size_type newSize)
    {
        //grow capacity if needed (copies old values to new memory)
        if(newSize > capacity()) {
            auto temp = dynamic_matrix(*this, newSize);
            swap(*this, temp);
        }
    }
    //---------------------------------------------------------------
    template<class... Args>
    void
    mem_reserve_least(size_type newSize, Args&&... args)
    {
        if(newSize > capacity()) {
            auto temp = dynamic_matrix(*this, size_type(1.5 * double(newSize)));
            swap(*this, temp);
        }
        //construct new elements if neccessary
        for(auto e = first_ + newSize; last_ < e; ++last_) {
            alloc_traits::construct(alloc_, last_, std::forward<Args>(args)...);
        }
    }

    //---------------------------------------------------------------
    void
    mem_resize_destroy(size_type newSize) {
        //destroy elements no longer needed
        for(auto e = first_ + newSize; last_ > e; --last_) {
            alloc_traits::destroy(alloc_, last_);
        }
    }

    //---------------------------------------------------------------
    template<class... Args>
    void
    mem_resize(size_type newSize, Args&&... args)
    {
        if(newSize == size()) return;

        if(newSize < size()) {
            mem_resize_destroy(newSize);
        }
        else { //newSize > size()
            mem_reserve(newSize);

            //(default-)construct new elements if neccessary
            for(auto e = first_ + newSize; last_ < e; ++last_) {
                alloc_traits::construct(alloc_, last_,
                    std::forward<Args>(args)...);
            }
        }
    }
    //-----------------------------------------------------
    void
    mem_erase() {
        mem_destroy_content();

        if(first_) {
            alloc_traits::deallocate(alloc_, first_, capacity());
        }

        cols_ = 0;
        rows_ = 0;
        first_ = nullptr;
        last_ = nullptr;
        memEnd_ = nullptr;
    }


    //---------------------------------------------------------------
    void
    mem_erase_cols(size_type first, size_type last) {
        size_type quantity = last - first + 1;

        if(quantity >= cols_) {
            clear();
        }
        else {
            //move elements towards begin
            pointer tgt = first_ + first;
            const_pointer src = static_cast<const_pointer>(tgt);

            for(size_type r = 0; r < rows_-1; ++r) {
                src += quantity;
                for(size_type c = 0; c < cols_-quantity; ++c) {
                    *tgt = std::move(*src);
                    ++tgt;
                    ++src;
                }
            }
            src += quantity;
            for(size_type c = first; c < cols_-quantity; ++c) {
                *tgt = std::move(*src);
                ++tgt;
                ++src;
            }

            //destroy content of remaining unused columns
            for(size_type i = 0, e = quantity * rows_; i < e; ++i) {
                --last_;
                alloc_traits::destroy(alloc_, last_);
            }
            cols_ -= quantity;
        }
    }

    //-----------------------------------------------------
    void
    mem_erase_rows(size_type first, size_type last) {
        size_type quantity = last - first + 1;

        if(quantity >= rows_) {
            clear();
        }
        else {
            //move elements towards begin
            pointer tgt = first_ + first*cols_;
            const_pointer src = first_ + (first+quantity)*cols_;

            for(size_type i = 0; i < (rows_-first-quantity)*cols_; ++i) {
                *tgt = std::move(*src);
                ++tgt;
                ++src;
            }

            //destroy content of remaining unused rows
            for(size_type i = 0, e = quantity * cols_; i < e; ++i) {
                --last_;
                alloc_traits::destroy(alloc_, last_);
            }
            rows_ -= quantity;
        }
    }


    //---------------------------------------------------------------
    void
    mem_insert_cols(size_type index, size_type quantity)
    {
        size_type oldSize = size();
        mem_reserve_least(rows_*(cols_+quantity));

        //move elements towards back
        const_pointer src = first_ + oldSize - 1;
        pointer tgt = last_ - 1;
        for(size_type i = 0; i < cols_-index; ++i, --tgt, --src) {
            *tgt = std::move(*src);
        }

        for(size_type r = 0; r < rows_-1; ++r) {
            tgt -= quantity;
            for(size_type c = 0; c < cols_; ++c,--tgt, --src) {
                *tgt = std::move(*src);
            }
        }

        cols_ += quantity;
    }

    //-----------------------------------------------------
    void
    mem_insert_rows(size_type index, size_type quantity)
    {
        size_type oldSize = size();
        mem_reserve_least(cols_*(rows_+quantity));

        //move elements towards back
        const_pointer src = first_ + oldSize - 1;
        const_pointer pidx = first_ + (index * cols_);
        for(pointer tgt = last_-1; src >= pidx; --tgt, --src) {
            *tgt = std::move(*src);
        }

        rows_ += quantity;
    }

    //---------------------------------------------------------------
    pointer
    ptr(size_type row, size_type col) const noexcept
    {
        return (first_ + row*cols_ + col);
    }


    //---------------------------------------------------------------
    // DATA MEMBERS
    //---------------------------------------------------------------
    size_type rows_ = 0;
    size_type cols_ = 0;
    pointer first_ = nullptr;
    pointer last_ = nullptr;
    pointer memEnd_ = nullptr;
    allocator_type alloc_;
};


}  // namespace am


#endif
