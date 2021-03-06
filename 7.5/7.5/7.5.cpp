// 7.5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
int fac(int n);
using namespace std;

int main()
{
	cout << "This program can calculate the factorial.\t'q' to quit." << endl;
	int n;
	int result;
	while (1)
	{
		cout << "Please enter the number for factorial: ";
		cin >> n;
		if (!cin)
		{
			cout << "Input terminated.\nQuit\n";
			break;
		}
		else if (n < 0)
		{
			cout << "Bad input, please enter a positive number!" << endl;
			continue;
		}
		else if (n >= 0)
		{
			result = fac(n);
			cout << "The factorial of " << n << " is " << result << endl;
		}
	}
	system("pause");
    return 0;
}

int fac(int n)
{
	int result;
	if (n == 0)
		result = 1;
	else
	{
		result = n * fac(n - 1);
		
	}
	return result;
}

