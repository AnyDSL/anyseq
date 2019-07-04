#ifndef ANYSEQ_SEQUENCE_IO_H_
#define ANYSEQ_SEQUENCE_IO_H_


#include <atomic>
#include <cstdint>
#include <fstream>
#include <memory>
#include <mutex>
#include <string>

#include "io_error.h"


namespace anyseq {


/*************************************************************************//**
 *
 * @brief polymorphic file reader for bio-sequences
 *        base class handles concurrency safety
 *
 *****************************************************************************/
class sequence_reader
{
public:
    using index_type = std::uint_least64_t;

    struct sequence {
        index_type  index;       //number of sequence in file (+ offset)
        std::string header;      //meta information (FASTA >, FASTQ @)
        std::string data;        //actual sequence
        std::string qualities;   //quality scores (FASTQ)
    };

    sequence_reader(): index_{0}, valid_{true} {}

    sequence_reader(const sequence_reader&) = delete;
    sequence_reader& operator = (const sequence_reader&) = delete;
    sequence_reader& operator = (sequence_reader&&) = delete;

    virtual ~sequence_reader() = default;

    /** @brief read & return next sequence */
    sequence next();

    /** @brief skip n sequences */
    void skip(index_type n);

    bool has_next() const noexcept { return valid_.load(); }

    index_type index() const noexcept { return index_.load(); }

    void index_offset(index_type index) { index_.store(index); }

protected:
    void invalidate() { valid_.store(false); }

    //derived readers have to implement this
    virtual void read_next(sequence&) = 0;

private:
    mutable std::mutex mutables_;
    std::atomic<index_type> index_;
    std::atomic<bool> valid_;
};



/*************************************************************************//**
 *
 * @brief reads sequences from FASTA files
 *
 *****************************************************************************/
class fasta_reader :
    public sequence_reader
{
public:
    explicit
    fasta_reader(std::string filename);

protected:
    void read_next(sequence&) override;

private:
    std::ifstream file_;
    std::string linebuffer_;
};



/*************************************************************************//**
 *
 * @brief reads sequences from FASTQ files
 *
 *****************************************************************************/
class fastq_reader :
    public sequence_reader
{
public:
    explicit
    fastq_reader(std::string filename);

protected:
    void read_next(sequence&) override;

private:
    std::ifstream file_;
};



/*************************************************************************//**
 *
 * @brief reads sequence header lines only
 *
 *****************************************************************************/
class sequence_header_reader :
    public sequence_reader
{
public:
    explicit
    sequence_header_reader(std::string filename);

protected:
    void read_next(sequence&) override;

private:
    std::ifstream file_;
};



/*************************************************************************//**
 *
 * @brief guesses and returns a suitable sequence reader
 *        based on a filename pattern
 *
 *****************************************************************************/
std::unique_ptr<sequence_reader>
make_sequence_reader(const std::string& filename);



} // namespace anyseq


#endif
