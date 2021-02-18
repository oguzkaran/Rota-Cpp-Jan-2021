/*----------------------------------------------------------------------------------------------------------------------
    Sadece ctor'larda kullanýlabilen bir ilk deðer verme sentaksý vardýr
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include "Point.hpp"


class Sample {
public:
    int a;
    int b;

    Sample();
    Sample(int x, int y);
    ~Sample() {}
    void display()
    {
        std::cout << "a = " << a << ", b = " << b << '\n';
    }
};

Sample::Sample() : a{}, b{} //MIL (Member initializer list), ctor, ctor initializer list
{
}

Sample::Sample(int x, int y) : a{ x }, b{ y }
{
}

int main()
{    
    Point p1{ 100, 200 };
    Point p2{ 300 };
    Point p3{};

    p1.display();
    p2.display();
    p3.display();

    return 0;
}
