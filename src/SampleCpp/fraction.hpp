#pragma once
#ifndef FRACTION_HPP_
#define FRACTION_HPP_
#include <cstdlib>
#include <iostream>

class Fraction {
private:
	int pay;
	int payda;
	static void check(int numerator, int denominator);
public:
	explicit Fraction(int pay_input, int payda_input) {
		payda = payda_input;
		set_numerator(pay_input);
		set_denominator(payda_input);
	}

public:
	int hcf(int pay, int payda);
	void set_numerator(int pay);
	void set_denominator(int payda);
	int get_numerator() {
		return pay;
	}
	int get_denominator() {
		return payda;
	}
	Fraction operator+(int add);
	Fraction operator-(int sub);
	Fraction operator+(Fraction f);
	Fraction operator-(Fraction f);
	Fraction operator/(int val);
	Fraction operator/(Fraction f);
	Fraction& operator++(int);
	Fraction& operator++();
	Fraction& operator--();
	Fraction& operator--(int);
	bool operator>(Fraction f);
	bool operator>(double val);
	bool operator<(Fraction f);
	bool operator<(double val);
};
#endif // FRACTION_HPP_