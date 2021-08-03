#ifndef __EPOLL_IO_HPP__
#define __EPOLL_IO_HPP__

#include "async_io.hpp"

class epoll_io_context : public io_context {

public:
    

    int register();


};


#endif // __EPOLL_IO_HPP__