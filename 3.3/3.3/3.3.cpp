// 3.3.cpp: 定义控制台应用程序的入口点。
// 3.3.cpp: 显示度、分、秒之间的转换

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees:__\b\b";
	int degree;
	cin >> degree;
	cout << "Next, enter the minutes:__\b\b";
	int minute;
	cin >> minute;
	cout << "Finally, enter the seconds:__\b\b";
	int second;
	cin >> second;
	const int Convert = 60;
	double latitude;
	latitude = degree + double(minute) / Convert + double(second) / Convert / Convert;
	cout << degree << " degrees, " << minute << " minute, " << second << " seconds = " << latitude << " degrees" << endl;
	cin.get();
	cin.get();
    return 0;
}

