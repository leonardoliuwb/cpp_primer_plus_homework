// 5.3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	int num;
	int sum = 0;
	cout << "Please enter your number:" << endl;
	cin >> num;
	for (; num != 0; cin >> num)
	{
		sum = sum + num;
		cout << "Now the total sum is " << sum << endl;
	}

	cout << "Done\a\n";
	system("pause");
    return 0;
}

