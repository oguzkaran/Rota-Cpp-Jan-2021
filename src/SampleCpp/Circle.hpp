#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_

#include <cmath>

class Circle {
private:
	double m_r;
	double m_pi;
public:
	Circle(double r = 0, double pi = (double)3.14159265359);
public:
	double getRadius() const { return m_r; }
	void setRadius(double radius);
	double getArea() const { return m_pi * m_r * m_r; }
	double getCircumference() const { return 2 * m_pi * m_r; }
	void setPI(double pi);		
};

#endif //CIRCLE_HPP_

