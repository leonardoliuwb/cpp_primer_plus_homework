// 7.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double cal(int num1, int num2, int bingo1, int bingo2);
const int Num1 = 47;
const int Num2 = 27;
const int Bingo1 = 5;
const int Bingo2 = 1;

int main()
{
	cout << "Your Probability to win the first prize in this game is\t";
	double pro;
	pro = cal(Num1, Num2, Bingo1, Bingo2);
	cout << pro << " !!!" << endl;
	system("pause");
    return 0;
}

double cal(int num1, int num2, int bingo1, int bingo2)
{
	double pro, pro1, pro2;
	pro1 = double(bingo1) / double(num1);
	pro2 = double(bingo2) / double(num2);
	pro = pro1 * pro2;
	return pro;
}
