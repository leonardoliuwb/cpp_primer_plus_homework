// 3.1.cpp: 定义控制台应用程序的入口点。
// 3.1.cpp: 显示自己的身高

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter your height:________\b\b\b\b\b\b\b\b ";
	int height;
	cin >> height;
	const int Ft_per_in = 12;
	int ft, in;
	ft = height / Ft_per_in;
	in = height % Ft_per_in;
	cout << "That means you are " << ft << " feet and " << in << " inches height." << endl;
	cin.get();
	cin.get();
    return 0;
}

