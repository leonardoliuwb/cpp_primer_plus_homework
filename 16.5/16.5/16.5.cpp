// 16.5.cpp -- function 

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
template <class T>
int reduce(T ar[], int n);

int main()
{
	long testarr[10] = { 156, 124, 23, 43, 35, 23, 124, 199, 210, 156 };
	cout << "The following is my original array:\n";
	for (int i = 0; i < 10; i++)
	{
		cout << testarr[i] << " ";
	}
	cout << endl;
	int newsize = reduce(testarr, 10);
	cout << "After reduction, the long array:\n";
	for (int i = 0; i < newsize; i++)
	{
		cout << testarr[i] << " ";
	}
	cout << endl;
	cout << "The secnd test array is:\n";
	string testarr2[10] = { "hah", "china", "play", "end", "hah", "play", "speak", "play", "zero", "apple" };
	for (int i = 0; i < 10; i++)
	{
		cout << testarr2[i] << " ";
	}
	cout << endl;
	int newsize2 = reduce(testarr2, 10);
	cout << "After reduction, the string array:\n";
	for (int i = 0; i < newsize2; i++)
	{
		cout << testarr2[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

template <class T>
int reduce(T ar[], int n)
{
	sort(ar, ar + n);
	T * new_ar;
	new_ar = unique(ar, ar + n);
	return new_ar - ar;
}

