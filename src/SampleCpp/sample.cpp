/*----------------------------------------------------------------------------------------------------------------------
    Aşağıdaki örnekte MyString sınıfı immutable olarak tasarlandığından Person ile olan ilişkisi tam olarak ne aggregation 
    ne de composition ilişkisidir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <cstring>

class MyString {
    char* m_str;
public:
    MyString(const char* str) : m_str{ new char[std::strlen(str) + 1] }
    {
        std::strcpy(m_str, str);
    }

    //...

    ~MyString() { delete[] m_str; }
public:
    constexpr char* getString() const { return m_str; }
};

class Person {
private:
    MyString *m_name;
    int m_no;
public:
    Person(MyString *name, int no) : m_name{ name }, m_no{no}
    {}
};

#if 1
int main()
{
    using namespace std;

    MyString myString{ "Oğuz karan" };
    Person p{ &myString, 1 };

    //...

    return 0;
}
#endif
