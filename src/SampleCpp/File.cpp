#include "File.hpp"

#include <iostream>
#include <cstdlib>

using namespace com::rota::util::io;
using namespace std;

File::File() : m_f{ nullptr }, m_path{ '\0' }
{}

File::File(const char* name) : File{}
{
	strcpy(m_path, name);
}

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
		fclose(m_f);
}

bool File::open(const char* name, const char* mode)
{
	return (m_f = fopen(name, mode)) != nullptr;
}

bool File::open(const char* mode)
{
	return open(m_path, mode);
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
	fseek(m_f, whence, offset);
}

void File::close()
{
	if (m_f == nullptr)
		return;

	fclose(m_f);
	m_f = nullptr;
}

void File::type() const
{
	int ch;

	while ((ch = fgetc(m_f)) != EOF)
		cout << static_cast<char>(ch);

	cout << '\n';
}

void File::write(int ch) 
{
	fputc(ch, m_f);
}