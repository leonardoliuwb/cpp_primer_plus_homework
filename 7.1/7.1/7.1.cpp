// 7.1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double cal(int x, int y);

int main()
{
	int x, y;
	double ave;
	while (1)
	{
		cout << "Please enter two number:";
		cin >> x >> y;
		if (x == 0 || y == 0)
		{
			cout << "Input terminated\nQuit\n";
			break;
		}
		else
		{
			ave = cal(x, y);
			cout << "The harmonic average is " << ave << endl;
		}
	}
	system("pause");
    return 0;
}

double cal(int x, int y)
{
	double ave;
	ave = 2.0 * double(x * y) / (x + y);
	return ave;
}

