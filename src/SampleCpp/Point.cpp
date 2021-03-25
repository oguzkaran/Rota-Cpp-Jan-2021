#include <cmath>
#include "Point.hpp"

namespace com::rota::util::math::geometry {
    std::ostream& operator<<(std::ostream& os, const Point& p)
    {
        return os << "{x : " << p.x << ", y : " << p.y << "}";
    }

    std::istream& operator>>(std::istream& is, Point& p)
    {
        return is >> p.x >> p.y;
    }

    double Point::distance(const Point& other) const
    {
        return distance(other.x, other.y);
    }

    double Point::distance(int a, int b) const
    {
        return std::sqrt((x - a) * (x - a) + (y - b) * (y - b));
    }

    void Point::offset(int dx, int dy)
    {
        x += dx;
        y += dy;
    }

    void Point::offset(int dxy)
    {
        offset(dxy, dxy);
    }
    
}



