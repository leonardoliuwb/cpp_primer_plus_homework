// 2.7.cpp: 定义控制台应用程序的入口点。
// 空函数调用

#include "stdafx.h"
#include <iostream>
void display(int, int);

int main()
{
	using namespace std;
	cout << "Enter the number of hours: ";
	int hour;
	cin >> hour;
	cout << "Enter the number of minutes: ";
	int minute;
	cin >> minute;
	display(hour,minute);
	cin.get();
	cin.get();
    return 0;
}

void display(int hour, int minute)
{
	using namespace std;
	cout << "Time: " << hour << ":" << minute << endl;
}
