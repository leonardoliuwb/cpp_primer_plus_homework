// 8.5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
template <typename T>
T max5(T arr[5]);

int main()
{
	int arr1[5] = { 0, 1, 2, 3, 4 };
	double arr2[5] = { 1.1, 2.3, 5.6, 7.123, 2.0 };
	int max1;
	double max2;
	max1 = max5(arr1);
	max2 = max5(arr2);
	cout << "The first array is " << arr1[0] << " " << arr1[1] << " " << arr1[2] << " " << arr1[3] << " " << arr1[4]  << endl;
	cout << "The biggest number is " << max1 << endl;
	cout << "The second array is " << arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] << " " << arr2[4]  << endl;
	cout << "The biggest number is " << max2 << endl;
	cout << "Bye." << endl;
	system("pause");
    return 0;
}

template <typename T>
T max5(T arr[5])
{
	T max;
	max = arr[0] > arr[1] ? arr[0] : arr[1];
	max = max > arr[2] ? max : arr[2];
	max = max > arr[3] ? max : arr[3];
	max = max > arr[4] ? max : arr[4];
	return max;
}