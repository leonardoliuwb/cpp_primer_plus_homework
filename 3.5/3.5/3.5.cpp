// 3.5.cpp: 定义控制台应用程序的入口点。
// 3.6.cpp: 人口比例计算

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;

	cout << "Enter the world's population:__________\b\b\b\b\b\b\b\b\b\b";
	long long wp;
	cin >> wp;
	cout << "Enter the population of the US:__________\b\b\b\b\b\b\b\b\b\b";
	long long usp;
	cin >> usp;
	float rate;
	rate = float(usp) / float(wp) * 100;
	cout << "The population of the US is " << rate << "% of the world population." << endl;
	cin.get();
	cin.get();

    return 0;
}

