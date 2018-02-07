// Classes Mk 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "myAddition.h"
#include "myMultiplication.h"
#include "Division.h"
using namespace std;


int main()
{
	myMultiplication myClass;
	myAddition myAddClass;
	MyClass1 AldenDivision;
	double input1, input2;
	char op;
	for (int i = 0; i < 3; i++) {
		cout << "Please enter an equation: ";
		cin >> input1 >> op >> input2;
		cout << input1 << " " << op << " " << input2 << endl;;
		while ((op != '/') && (op !='*') && (op != '-') && (op != '+')) {
			cout << "Please enter a correct operator: ";
			cin >> op;
		}
		switch (op) {
		case '+':
		{
			myAddClass.myClassWorkAddition(input1, input2);
			break;
		}
		case '-':
		{

			break;
		}
		case '*':
		{
			myClass.myClassWorkMultiplication(input1, input2);
			break;
		}
		case '/':
		{
			AldenDivision.DoDiv(input1, input2);
			break;
		}
		default:
		{
			break;
		}
		}
		input1, input2 = 0;
		
	}
	myClass.myTotalReturn();
    return 0;
}

