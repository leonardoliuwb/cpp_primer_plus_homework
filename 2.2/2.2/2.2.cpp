// 2.2.cpp: 定义控制台应用程序的入口点。
// 单位转换

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter the distance of long: ";
	int dis1;
	cin >> dis1;
	int dis2;
	dis2 = 220 * dis1;
	cout << dis1 << " long = " << dis2 << " yard" << endl;
	cin.get();
	cin.get();
    return 0;
}

