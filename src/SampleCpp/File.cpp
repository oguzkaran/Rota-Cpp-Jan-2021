#include "File.hpp"

#include <iostream>

File::File(File&&r) : m_f{r.m_f}
{
	r.m_f = nullptr;
}

File& File::operator =(File&& r)
{
	if (this == &r)
		return *this;

	m_f = r.m_f;
	r.m_f = nullptr;

	return *this;
}

File::~File()
{
	if (m_f != nullptr)
		std::fclose(m_f);
}

bool File::open(const char* name, const char* mode)
{
	return (m_f = std::fopen(name, mode)) != nullptr;
}

void File::seekSet()
{
	seek(SEEK_SET, 0);
}

void File::seekEnd()
{
	seek(SEEK_END, 0);
}

void File::seek(int whence, long offset)
{
	std::fseek(m_f, whence, offset);
}

void File::close()
{
	if (m_f == nullptr)
		return;

	std::fclose(m_f);
	m_f = nullptr;
}

void File::type() const
{
	int ch;

	while ((ch = std::fgetc(m_f)) != EOF)
		std::cout << static_cast<char>(ch);

	std::cout << '\n';
}

void File::write(int ch) 
{
	std::fputc(ch, m_f);
}