// 2.6.cpp: 定义控制台应用程序的入口点。
// 函数调用

#include "stdafx.h"
#include <iostream>
double convert(double);

int main()
{
	using namespace std;
	cout << "Enter the number of light years: ";
	double previoustime;
	cin >> previoustime;
	double converttime;
	converttime = convert(previoustime);
	cout << previoustime << " light years = " << converttime << " astronomical units." << endl;
	cin.get();
	cin.get();
    return 0;
}

double convert(double previoustime)
{
	using namespace std;
	double converttime;
	converttime = 63240 * previoustime;
	return converttime;
}

