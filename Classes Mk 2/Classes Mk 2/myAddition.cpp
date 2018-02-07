#include "stdafx.h"
#include "myAddition.h"
#include <iostream>
using namespace std;

myAddition::myAddition()
{
	myStatus = 0;
}
myAddition::myAddition(double a)
{
	myStatus = a;
}

myAddition::~myAddition()
{
}
void myAddition::myClassWorkAddition(double input1, double input2)
{
	double temp;
	temp = input1 + input2;
	myStatus += temp;
	cout << input1 << " + " << input2 << " = " << temp << endl;
	
}
double myAddition::myStatusReturn()
{
	return myStatus;
}
void myAddition::myTotalReturn() {
	cout << "The Total result = " << myStatus << endl;
}
