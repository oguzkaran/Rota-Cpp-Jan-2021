#ifndef FILE_HPP_
#define FILE_HPP_

#include <cstdio>

namespace com::rota::util::io {
	class File {
	private:
		std::FILE* m_f;
		char m_path[1024];
	public:
		File();
		explicit File(const char* name);		
		File(File&& r);
		File& operator =(File&& r);
		~File();
	public:
		std::FILE* getFile() const { return m_f; }
	public:
		bool open(const char* name, const char* mode);
		bool open(const char* mode);
		void seekSet();
		void seekEnd();
		void seek(int whence, long offset);
		void close();
		void type() const;
		void write(int ch);
		//...
	};
}

#endif // FILE_HPP_
