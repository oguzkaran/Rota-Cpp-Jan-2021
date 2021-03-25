#include "fraction.hpp"
#include <iostream>
#include <cstdlib>

void Fraction::check(int numerator, int denominator)
{
	using namespace std;

	if (denominator == 0) {
		if (numerator == 0)
			cerr << "Belirsiz:\n";
		else
			cerr << "Belirsiz:\n";
		
		exit(EXIT_FAILURE);
	}
}

int Fraction::hcf(int pay, int payda) {
	int small = 1;
	int obeb = 1;
	if (pay > payda) {
		small = payda;
	}
	else {
		small = pay;
	}
	for (int i = 1; i <= small; i++)
	{
		if (pay % i == 0 && payda % i == 0) {
			obeb = i;
		}
	}
	return obeb;
}
void Fraction::set_numerator(int numerator) {
	check(numerator, payda);	
	
	if (numerator < 0) {
		pay = -1 * numerator;
		payda *= -1;
	}
	else {
		pay = numerator;
	}
	int obeb = hcf(pay, payda);
	payda /= obeb;
	pay /= obeb;
	
}
void Fraction::set_denominator(int denominator) {
	if (denominator == 0) {
		std::cout << "Belirsiz" << '\n';
		std::exit(EXIT_FAILURE);
	} else {
		if (denominator < 0) {
			payda = -1 * denominator;
			pay *= -1;
		}
		else {
			payda = denominator;
		}
		int obeb = hcf(pay, payda);
		payda /= obeb;
		pay /= obeb;
	}
}

Fraction Fraction::operator+(int add)
{
	set_numerator((add * payda) + pay);
	return *this;
}
Fraction Fraction::operator-(int sub)
{
	set_numerator(pay - (payda * sub));
	return *this;
}
Fraction Fraction::operator+(Fraction f)
{
	set_numerator(pay + f.pay);
	set_denominator(payda + f.payda);
	return *this;
}
Fraction Fraction::operator-(Fraction f)
{
	set_numerator(pay - f.pay);
	set_denominator(payda - f.payda);
	return *this;
}
Fraction Fraction::operator/(int val)
{
	set_denominator(payda * val);
	return *this;
}
Fraction Fraction::operator/(Fraction f)
{
	set_numerator(pay * f.payda);
	set_denominator(payda * f.pay);
	return *this;
}
Fraction& Fraction::operator++()
{
	set_numerator(pay + payda);
	return *this;
}
Fraction& Fraction::operator++(int) {
	set_numerator(pay + payda);
	return *this;
}
Fraction& Fraction::operator--()
{
	set_numerator(pay - payda);
	return *this;
}
Fraction& Fraction::operator--(int)
{
	set_numerator(pay - payda);
	return *this;
}
bool Fraction::operator>(Fraction f)
{
	int compare_1 = pay * f.payda;
	int compare_2 = payda * f.pay;
	return compare_1 > compare_2;
}
bool Fraction::operator>(double f)
{
	double compare_1 = payda * f;
	return compare_1 > pay;
}
bool Fraction::operator<(Fraction f)
{
	int compare_1 = pay * f.payda;
	int compare_2 = payda * f.pay;
	return compare_1 < compare_2;
}
bool Fraction::operator<(double f)
{
	double compare_1 = payda * f;
	return compare_1 < pay;
}
#if 0
int main() {
	Fraction a = Fraction(0, 1);
	Fraction b = Fraction(8, 4);

	++a;
	a++;
	a--;
	bool c = b > 1;
	std::cout << c << '\n';
	std::cout << a.get_numerator() << '\n';
	std::cout << a.get_denominator()  << '\n';
	//std::cout << "asdf" << '\n';
}
#endif
