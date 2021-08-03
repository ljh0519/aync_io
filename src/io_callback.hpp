#ifndef __IO_CALLBACK_HPP__
#define __IO_CALLBACK_HPP__



class callback {
    using thiz = callback;
public:
    
    virtual void onRead() = 0;

    virtual void onWrite() = 0;

    virtual void onExcepted() = 0;


};

#endif // __IO_CALLBACK_HPP__