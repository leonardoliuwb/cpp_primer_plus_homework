// 5.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	double money[2] = { 100,100 };
	int y;
	cout << "Daphne and Cleo both have $100 at first." << endl;
	for (y = 0; money[0] >= money[1]; y++)
	{
		money[0] = 0.1 * 100 + money[0];
		money[1] = 0.05 * money[1] + money[1];
	}
	cout << y << " years later Cleo will have more money than Daphne." << endl;
	cout << "At that time Cleo will have $" << money[1] << ", while Daphne will have $" << money[0] << ".\n";
	
	system("pause");
	return 0;
}

