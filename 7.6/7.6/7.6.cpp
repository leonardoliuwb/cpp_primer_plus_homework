// 7.6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
int Fill_array(double ar[], int size);
void Show_array(double ar[], int size);
void Reverse_array(double ar[], int size);
using namespace std;
const int Max = 20;

int main()
{
	cout << "Please enter the data of array. 'q' to quit.\n";
	double ar[Max];
	int size;
	size = Fill_array(ar, Max);
	Show_array(ar, size);
	Reverse_array(ar, size);
	cout << "\nAfter the reverse.";
	Show_array(ar, size);
	Reverse_array(ar, size);
	cout << "\nAfter the reverse.";
	Reverse_array(ar + 1, size - 2);
	Show_array(ar, size);
	cout << endl;
	system("pause");
    return 0;
}

int Fill_array(double ar[], int size)
{
	int i;
	double j;
	int num;
	for (i = 0; i < size; i++)
	{
		cin >> j;
		if (!cin)
		{
			cout << "Input terminated.\nQuit.\n";
			break;
		}
		else
		{
			ar[i] = j;
		}
		num = i + 1;
	}
	return num;
}

void Show_array(double ar[], int size)
{
	int i;
	cout << "\nThe array is:\n";
	for (i = 0; i < size; i++)
	{
		cout << ar[i] << " ";
	}
}

void Reverse_array(double ar[], int size)
{
	int i;
	double temp;
	for (i = 0; i < (size / 2); i++)
	{
		temp = ar[i];
		ar[i] = ar[size - 1 - i];
		ar[size - 1 - i] = temp;
	}
}
