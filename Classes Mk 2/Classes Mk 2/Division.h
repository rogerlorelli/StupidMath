#pragma once

class MyClass1
{
private:
	double myStatus;
	double result;

public:
	MyClass1();
	~MyClass1();
	void DoDiv(double, double); //Takes two inputs and first checks for zero or neg. numbers. if no errors found, Divides them and outputs result;
};

