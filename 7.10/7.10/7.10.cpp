// 7.10.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
double add(double x, double y);
double sub(double x, double y);
double calculate(double x, double y, double (*func)(double x, double y));
using namespace std;

int main()
{
	while (1)
	{
		cout << "Please enter two numbers, 'q' to quit: ";
		double x, y;
		double result;
		cin >> x >> y;
		if (!cin)
		{
			cout << "Input terminated.\nQuit.\n";
			break;
		}
		double q = calculate(x, y, add);
		double w = calculate(x, y, sub);
		cout << x << " add " << y << " equals to " << q << endl;
		cout << x << " minus " << y << " equals to " << w << endl;
	}
	
	system("pause");
    return 0;
}

double add(double x, double y)
{
	return x + y;
}

double sub(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, double (*func)(double x, double y))
{
	double result;
	result = (*func)(x, y);
	return result;
}