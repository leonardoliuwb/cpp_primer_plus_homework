// 2.4.cpp: 定义控制台应用程序的入口点。
// 函数调用

#include "stdafx.h"
#include <iostream>
int convert(int);

int main()
{
	using namespace std;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	int month;
	month = convert(age);
	cout << "It means " << month << " months" << endl;
	cin.get();
	cin.get();
    return 0;
}

int convert(int age)
{
	using namespace std;
	return 12 * age;
}
