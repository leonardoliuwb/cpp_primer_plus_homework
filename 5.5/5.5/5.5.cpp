// 5.5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	const int num = 11;
	int sell[num + 1];
	int total = 0;
	const char * months[num + 1] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	for (int i = 0; i <= num; i++)
	{
		cout << months[i] << ": ";
		cin >> sell[i];
		total += sell[i];
	}

	cout << "So this year we sold " << total << " books for all.\n";
	
	system("pause");
    return 0;
}

