// 2.5.cpp: 定义控制台应用程序的入口点。
// 函数调用

#include "stdafx.h"
#include <iostream>
double convert(double);

int main()
{
	using namespace std;
	cout << "Please enter a Celsius value: ";
	double degree;
	cin >> degree;
	double convertdegree;
	convertdegree = convert(degree);
	cout << degree << " degrees Celsius is " << convertdegree << " degrees Fahrenheit." << endl;
	cin.get();
	cin.get();
    return 0;
}

double convert(double degree)
{
	using namespace std;
	double convertdegree;
	convertdegree = 1.8 * degree + 32;
	return convertdegree;
}

