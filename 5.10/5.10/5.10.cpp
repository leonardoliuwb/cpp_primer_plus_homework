// 5.10.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	cout << "Enter numbers of rows: ";
	int row;
	cin >> row;

	int i;
	for (i = 1; i <= row; i++)
	{
		int j;
		int k;
		for (j = 1; j <= (row - i); j++)
			cout << ".";
		for (k = 1; k <= i; k++)
			cout << "*";
		cout << endl;
	}
	
	system("pause");
    return 0;
}

