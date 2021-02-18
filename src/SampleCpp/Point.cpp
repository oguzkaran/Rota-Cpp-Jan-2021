#include <cmath>
#include "Point.hpp"

double Point::distance(const Point &other)
{
    return distance(other.x, other.y);
}

double Point::distance(int a, int b)
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

void Point::display()
{
    std::cout << "{x:" << x << ", y: " << y << "}\n";
}

