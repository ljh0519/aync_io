#ifndef __ASYNC_IO_HPP__
#define __ASYNC_IO_HPP__


class io_context {
public:
    io_context() = default;
    io_context(io_context&) = delete;
    io_context(const io_context&) = delete;
    io_context(io_context&&) = delete;
    io_context(const io_context&&) = delete;

    void start() {

    }
};


#endif // __ASYNC_IO_HPP__