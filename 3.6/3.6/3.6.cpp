// 3.6.cpp: 定义控制台应用程序的入口点。
// 3.6.cpp: 显示里程计算

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	cout << "Enter your miles:";
	float mile;
	cin >> mile;
	cout << "Enter your calons:";
	float calon;
	cin >> calon;
	float n;
	n = mile / calon;
	cout << "You drive " << n << " miles using 1 calon gas" << endl;
	cin.get();
	cin.get();

    return 0;
}

