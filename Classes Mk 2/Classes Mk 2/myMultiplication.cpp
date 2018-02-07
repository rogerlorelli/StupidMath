#include "stdafx.h"
#include "myMultiplication.h"

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void myMultiplication::myClassWorkMultiplication(double input1, double input2) {
	while (input1 > 1000000) {
		cout << "Input too large." << endl;
		cout << "Please enter the first number: ";
		cin >> input1;
	}
	while (input2 > 1000000) {
		cout << "Input too large." << endl;
		cout << "Please enter the first number: ";
		cin >> input2;
	}
	double temp = (input1*input2);
	if (temp > 1000000)
	{
		cout << "Getting too close to stack overflow." << endl;
		return;
	}
	myStatus += temp;
	cout << input1 << " * " << input2 << " = " << temp << endl;
}

double myMultiplication::myStatusReturn() {
	return myStatus;
}

void myMultiplication::myTotalReturn() {
	cout << "The Total result = "<< myStatus << endl;
}
myMultiplication::myMultiplication(double a)
{
	myStatus = a;
}

myMultiplication::myMultiplication()
{
	myStatus = 0;
}


myMultiplication::~myMultiplication()
{
}
