// funcs.cpp
#include "stdafx.h"
#include "funcs.h"
#include <iostream>

double MySum(double a, double b)
{
	return a + b;
}
double MySub(double a, double b)
{
	return a - b;
}
double MyMul(double a, double b)
{
	return a * b;
}
double MyDiv(double a, double b)
{
	return a / b;
}
double Input(double a, double b)
{
	cout << "Enter 2 numbers: "
	cin << a << " " << b << endl;
}
int Choise(int n)
{
	cout << "Welcome to calculator!" << endl;
	cout << "Choise action: " << endl;
	cout << "\n1. Operation sum. " << endl;
	cout << "\n2. Operation sub. " << endl;
	cout << "\n3. Operation mul. " << endl;
	cout << "\n4. Operation div. " << endl;
	cin << n << endl;
	cout << n << endl;
	switch (