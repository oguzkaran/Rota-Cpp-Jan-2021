#include "IntValue.hpp"

IntValue& IntValue::add(int val)
{
	value += val;

	return *this;
}

IntValue& IntValue::subtract(int val)
{
	add(-val);

	return *this;
}

IntValue& IntValue::multiply(int val)
{
	value *= val;

	return *this;
}

