// 8.6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maxn(T arr[], int n);

template <> char * maxn(char * arr[], int n);

int main()
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	double arr2[4] = { 1.5, 8.66, 7.773, 0.4 };
	int max1;
	double max2;
	max1 = maxn(arr1, 6);
	max2 = maxn(arr2, 4);
	char * arr3[5] = { "one", "two", "three", "four", "five" };
	char * max3;
	max3 = maxn(arr3, 5);
	cout << "The biggest number of the first array is " << max1 << endl;
	cout << "The biggest number of the second array is " << max2 << endl;
	cout << "The longest address of the third array is " << &max3 << endl;
	cout << "Bye." << endl;
	system("pause");
    return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
	T max = 0;
	for (int i = 0; i < n; i++)
	{
		max = max > arr[i] ? max : arr[i];
	}
	return max;
}

template <> char * maxn(char * arr[], int n)
{
	int j = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < strlen(arr[i]))
		{
			max = strlen(arr[i]);
			j = i;
		}
	}
	char * address = arr[j];
	return address;
}

