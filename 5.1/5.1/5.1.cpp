// 5.1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int min, max;
	cout << "Please enter two numbers:" << endl;
	cout << "Min: ";
	cin >> min;
	cout << "Max: ";
	cin >> max;
	int sum = 0;
	for (int i = min; i <= max; i++)
		sum = sum + i;
	cout << "The total sum of " << min << " to " << max << " is " << sum << endl;

	system("pause");
    return 0;
}

