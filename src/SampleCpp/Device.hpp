#ifndef DEVICE_HPP_
#define DEVICE_HPP_

class Device {
public:
    char name[100];
    char host[16];
    int port;
    bool isOpen;
public:
    void open();
    void connect();
    void close();
    //...
};

#endif //DEVICE_HPP_
