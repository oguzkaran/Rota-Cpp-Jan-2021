#ifndef POINT_HPP_
#define POINT_HPP_

#include <iostream>

class Point {
public:
    int x, y;
public:
    Point(int a = 0, int b = 0) : x{ a }, y{ b } 
    {}
public:
    double distance(const Point &other) const;
    double distance(int x, int y) const;
    void offset(int dx, int dy);
    void offset(int dxy);
    void display() const {std::cout << "{x:" << x << ", y: " << y << "}\n";}
    //...
};


#endif //POINT_HPP_
