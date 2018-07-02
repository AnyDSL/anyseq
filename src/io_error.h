#ifndef ANYSEQ_IO_ERROR_H_
#define ANYSEQ_IO_ERROR_H_


#include <string>
#include <stdexcept>


/*************************************************************************//**
 *
 *****************************************************************************/
class io_error :
    public std::runtime_error
{
public:
    explicit
    io_error(const std::string& what):
        std::runtime_error(what)
    {}
};



/*************************************************************************//**
 *
 *****************************************************************************/
class io_format_error :
    public io_error
{
public:
    explicit
    io_format_error(const std::string& what):
        io_error(what)
    {}

};



/*************************************************************************//**
 *
 *****************************************************************************/
class file_io_error :
    public io_error
{
public:
    explicit
    file_io_error(const std::string& what):
        io_error(what)
    {}

    explicit
    file_io_error(const std::string& what, const std::string& filename):
        io_error(what), filename_(filename)
    {}

    virtual const char*
    filename() const noexcept {
        return filename_.c_str();
    }

private:
    std::string filename_;
};



/*************************************************************************//**
 *
 *****************************************************************************/
class file_access_error :
    public file_io_error
{
public:
    explicit
    file_access_error(const std::string& what):
        file_io_error(what)
    {}

    explicit
    file_access_error(const std::string& what, const std::string& filename):
        file_io_error(what,filename)
    {}
};



/*************************************************************************//**
 *
 *****************************************************************************/
class file_read_error :
    public file_io_error
{
public:
    explicit
    file_read_error(const std::string& what):
        file_io_error(what)
    {}

    explicit
    file_read_error(const std::string& what, const std::string& filename):
        file_io_error(what,filename)
    {}
};



/*************************************************************************//**
 *
 *****************************************************************************/
class file_write_error :
    public file_io_error
{
public:
    explicit
    file_write_error(const std::string& what):
        file_io_error(what)
    {}

    explicit
    file_write_error(const std::string& what, const std::string& filename):
        file_io_error(what,filename)
    {}
};


#endif
