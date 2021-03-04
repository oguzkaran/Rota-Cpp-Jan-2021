#include "Circle.hpp"

Circle::Circle(double r, double pi)
	: m_r{ std::abs(r) }, m_pi{ pi }
{}


void Circle::setRadius(double radius)
{
	m_r = abs(radius);
	
}

void Circle::setPI(double pi)
{
	m_pi = pi;
}