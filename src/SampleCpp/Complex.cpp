#include "Complex.hpp"


std::istream& operator>>(std::istream& is, Complex& z)
{
	return is >> z.m_real >> z.m_imag;
}

std::ostream& operator<<(std::ostream& os, const Complex& z)
{
	return os << z.m_real << " + " << z.m_imag << "i";
}

void Complex::setReal(double val)
{
	m_real = val;
}

void Complex::setImag(double val)
{
	m_imag= val;
}

Complex Complex::operator+(const Complex& other) const
{
	return Complex{m_real + other.m_real, m_imag + other.m_imag};
}

Complex Complex::operator+(double val) const
{
	return *this + Complex{ val };
}

Complex Complex::operator-(const Complex& other) const
{
	return Complex{ m_real - other.m_real, m_imag - other.m_imag };
}

Complex Complex::operator-(double val) const
{
	return *this + -val;
}