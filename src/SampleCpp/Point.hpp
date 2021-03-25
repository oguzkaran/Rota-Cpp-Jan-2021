#ifndef POINT_HPP_
#define POINT_HPP_

#include <iostream>

namespace com::rota::util::math::geometry {
    class Point {
        friend std::ostream& operator<<(std::ostream& os, const Point& p);
        friend std::istream& operator>>(std::istream& os, Point& p);
    public:
        int x, y;
    public:
        Point(int x = 0, int y = 0) : x{ x }, y{ y }
        {}
    public:
        double distance(const Point& other) const;
        double distance(int x, int y) const;
        void offset(int dx, int dy);
        void offset(int dxy);
        void display() const { std::cout << "{x:" << x << ", y: " << y << "}\n"; }
        //...
    };
}


#endif //POINT_HPP_
