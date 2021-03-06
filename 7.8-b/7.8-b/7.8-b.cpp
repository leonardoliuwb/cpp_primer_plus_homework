// 7.8-b.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
const int Seasons = 4;
struct ex 
{
	double expenses[Seasons];
};
const char * Snames[Seasons] = { "Spring", "Summer", "Fall", "Winter" };
void fill(ex * pa);
void show(ex * pa);
using namespace std;

int main()
{
	ex pa;
	fill(&pa);
	show(&pa);
	system("pause");
	return 0;
}

void fill(ex * pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> pa->expenses[i];
	}
}

void show(ex * pa)
{
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << pa->expenses[i] << endl;
		total += pa->expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
