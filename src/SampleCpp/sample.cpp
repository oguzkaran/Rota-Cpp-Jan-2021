/*----------------------------------------------------------------------------------------------------------------------
    const nesnelerin kullanýmý
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>

class Sample {
public:
    int a;
    int b;

    void foo() const;
    void bar();
};


void Sample::foo() const
{
    std::cout << "a = " << a << ", b = " << b << '\n';
}

void Sample::bar()
{
    ++a;
    ++b;
}

void display(const Sample& r)
{
    r.foo();
}

void display(const Sample *p)
{
    p->foo();
}

int main()
{
    Sample s{ 10, 20 };

    display(s);
    display(&s);    

    return 0;
}