// 6.2.cpp: 定义控制台应用程序的入口点。
// 6.2.cpp

#include "stdafx.h"
#include <iostream>
#include <cctype>
#include <string>

int main()
{
	using namespace std;

	double donation[10];
	double average = 0.0;
	int sum = 0;
	int num = 0, len = 0;
	for (int i = 0; i <= 9; i++)
	{
		cout << "Enter " << i + 1 << " number:";
		cin >> donation[i];
		if (cin.fail())
		{
			cout << "Not a digit!" << endl;
			break;
		}
		else
		{
			sum += donation[i];
			average = sum / (i + 1);
			len++;
		}
		
	}

	for (int i = 0; i <= len - 1; i++)
	{
		if (donation[i] > average)
			num++;
	}

	cout << "You input " << len << " numbers totally." << endl;
	cout << "The average is " << average << endl;
	cout << "There are " << num << " numbers are bigger than the average.";

	system("pause");
    return 0;
}

