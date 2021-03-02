#pragma once
class IntValue {
private:
	int value;
public:
	IntValue(int val = 0) : value{val}
	{}
	IntValue& add(int val);
	IntValue& subtract(int val);
	IntValue& multiply(int val);

};

