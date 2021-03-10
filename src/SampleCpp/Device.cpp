#include "Device.hpp"
#include <cstring>

Device::Device(const char* name, const char* host) : m_name{new char[std::strlen(name) + 1]}
{
	std::strcpy(m_name, name);
	std::strcpy(m_host, host);	
}

Device::Device(const Device& d) : Device{d.m_name, d.m_host}
{}

Device::Device(Device&& d) : m_name{ d.m_name }
{
	d.m_name = nullptr;
	std::strcpy(m_host, d.m_host);
}

Device& Device::operator=(const Device& d)
{
	if (this == &d)
		return *this;
	if (m_name != nullptr)
		delete[] m_name;

	m_name = new char[std::strlen(d.m_name) + 1];
	std::strcpy(m_name, d.m_name);	
	std::strcpy(m_host, d.m_host);

	return *this;
}

Device& Device::operator=(Device&& d)
{
	if (this == &d)
		return *this;

	if (m_name != nullptr)
		delete[] m_name;

	m_name = d.m_name;
	std::strcpy(m_host, d.m_host);
	d.m_name = nullptr;

	return *this;
}