// 5.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>

int main()
{
	using namespace std;

	const int ArSize = 101;
	array<long double, ArSize> factorials;
	int i;
	factorials[1] = factorials[0] = 1;
	for (i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	i = i - 1;
	cout << i << "! = " << factorials[i] << endl;
	system("pause");
    return 0;
}

