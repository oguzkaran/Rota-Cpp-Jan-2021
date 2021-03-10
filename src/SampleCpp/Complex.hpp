#ifndef COMPLEX_HPP_
#define COMPLEX_HPP_

#include <iostream>
#include <cmath>

class Complex {
	friend std::istream& operator>>(std::istream& is, Complex& z);
	friend std::ostream& operator<<(std::ostream& os, const Complex& z);
private:
	double m_real, m_imag;
public:
	explicit Complex(double real = 0, double imag = 0) : m_real{ real }, m_imag{imag}
	{}
	double getReal() const { return m_real; }
	double getImag() const { return m_imag; }
	double getLength() const { return std::sqrt(m_real * m_real + m_imag * m_imag); }

	void setReal(double val = 0);
	void setImag(double val = 0);
public:
	Complex operator+(const Complex& other) const;	
	Complex operator+(double val) const;

	Complex operator-(const Complex& other) const;
	Complex operator-(double val) const;
};

#endif //COMPLEX_HPP_

