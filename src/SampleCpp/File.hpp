#ifndef FILE_HPP_
#define FILE_HPP_

#include <cstdio>

class File {
private:
	std::FILE* m_f;	
public:
	File() : m_f{nullptr}
	{}
	File(const File&) = delete;
	File& operator =(const File&r) = delete;
	File(File&& r);
	File &operator =(File&& r);
	~File();
public:
	bool open(const char* name, const char* mode);
	void seekSet();
	void seekEnd();
	void seek(int whence, long offset);
	void close();
	void type() const;
	void write(int ch);
	//...
};

#endif // FILE_HPP_
