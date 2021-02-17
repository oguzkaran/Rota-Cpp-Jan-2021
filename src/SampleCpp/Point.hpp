#ifndef POINT_HPP_
#define POINT_HPP_

#include <iostream>

class Point {
public:
    int x, y;
public:
    void display();
    void offset(int dx, int dy);
    void offset(int dxy);
};


#endif //POINT_HPP_
