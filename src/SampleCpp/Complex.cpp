#include "Complex.hpp"


std::istream& operator>>(std::istream& is, Complex& z)
{
	return is >> z.m_real >> z.m_imag;
}

std::ostream& operator<<(std::ostream& os, const Complex& z)
{
	return os << z.m_real << " + " << z.m_imag << "i";
}

Complex operator+(double val, const Complex& z)
{
	return Complex{ val + z.m_real, z.m_imag };
}

Complex operator-(double val, const Complex& z)
{
	return val + -z;
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

Complex Complex::operator-() const
{
	return Complex{-m_real, -m_imag};
}

Complex Complex::operator+() const
{
	return *this;
}

Complex& Complex::operator++()
{
	++m_real;

	return *this;
}

Complex Complex::operator++(int)
{
	return Complex{ m_real++, m_imag };
}


Complex& Complex::operator--()
{
	--m_real;

	return *this;
}

Complex Complex::operator--(int)
{
	return Complex{ m_real--, m_imag };
}


Complex& Complex::operator+=(const Complex& other)
{
	return *this = *this + other;
}

bool Complex::operator ==(const Complex& other) const
{
	return m_real == other.m_real && m_imag == other.m_imag;
}

bool Complex::operator !=(const Complex& other) const
{
	return !(*this == other);
}

void Complex::operator ()() const
{
	std::cout << *this << '\n'; 
}

Complex Complex::operator()(double val) const
{
	return *this + val;
}

Complex& Complex::operator()(double real, double imag)
{
	m_real = real;
	m_imag = imag;

	return *this;
}

Complex::operator double() const
{
	return getLength();
}