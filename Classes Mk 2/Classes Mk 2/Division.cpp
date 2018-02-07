#include "stdafx.h"
#include "Division.h"
#include <iostream>
using namespace std;

void MyClass1::DoDiv(double input1, double input2)
{
	if (input2 == 0) // CHECK FOR 0
	{
		cout << "Error, Division by 0\n";
	}
	else if ((input1 < 0) || (input2 < 0)) // CHECK FOR NEG
	{
		cout << "No negative numbers\n";
	}
	else
	{
		double temp;
		temp = (input1 / input2);
		result = temp;
		cout << result << endl;
	}
}


MyClass1::MyClass1()
{

}


MyClass1::~MyClass1()
{
}
