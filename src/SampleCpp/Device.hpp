#ifndef DEVICE_HPP_
#define DEVICE_HPP_

class Device {
private:
    char* m_name;
    char m_host[16];    
public:
    Device() = default;
    Device(const char* name, const char* host); 
    Device(const Device& d);
    Device(Device&& d);
    Device& operator=(const Device& d);
    Device& operator=(Device&& d);  
    ~Device() { if (m_name != nullptr) delete[] m_name; }
    const char* getName() const { return m_name; }
    //...
};

#endif //DEVICE_HPP_
