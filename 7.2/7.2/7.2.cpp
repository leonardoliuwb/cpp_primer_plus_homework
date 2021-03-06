// 7.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
const int Max = 10;
int input(double ar[], int limit);
void display(const double ar[], int n);
double cal(double ar[], int n);
using namespace std;

int main()
{
	double scores[Max];
	int size = input(scores, Max);
	display(scores, size);
	double ave;
	ave = cal(scores, size);
	cout << "\nThe average score is " << ave << endl;
	system("pause");
    return 0;
}

int input(double ar[], int limit)
{
	int i;
	double score;
	cout << "Please enter the scores, 'q' to quit.\n";
	for (i = 0; i < limit; i++)
	{
		cout << "Enter the score #" << (i + 1) << ": ";
		cin >> score;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Input process terminated\nQuit\n";
			break;
		}
		ar[i] = score;
	}
	return i;
}

void display(const double ar[], int n)
{
	cout << "You entered " << n << " scores.\n";
	cout << "The scores are:\n";
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << "\t";
	}
}

double cal(double ar[], int n)
{
	double ave;
	double sum = 0.0;
	for (int i = 0; i < n; i++)
	{
		sum += ar[i];
	}
	ave = sum / n;
	return ave;
}

