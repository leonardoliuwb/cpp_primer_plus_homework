// 16.9.cpp -- test the speed of algorithms

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;
const int NUM = 1000000;

int main()
{
	cout << "----begin----" << endl;
	srand(time(0));
	vector<int> vi0(NUM);
	for (int i = 0; i < NUM; i++)
	{
		vi0[i] = rand();
	}
	vector<int> vi(vi0);
	list<int> li(vi0.begin(), vi0.end());
	cout << "Measure the sort() algorithm's running time for vector<int>:\n";
	clock_t vector_start = clock();
	sort(vi.begin(), vi.end());
	clock_t vector_end = clock();
	cout << "The time is " << (double)(vector_end - vector_start) / CLOCKS_PER_SEC << "s.\n";
	cout << "Then measure the sort() algorithm's running time for list<int>:\n";
	clock_t list_start = clock();
	li.sort();
	clock_t list_end = clock();
	cout << "The time is " << (double)(list_end - list_start) / CLOCKS_PER_SEC << "s.\n";
	cout << "Then measure the copy() and sort() algorithm's running time:\n";
	copy(vi0.begin(), vi0.end(), li.begin());
	clock_t copy_start = clock();
	copy(li.begin(), li.end(), vi.begin());
	sort(vi.begin(), vi.end());
	copy(vi.begin(), vi.end(), li.begin());
	clock_t copy_end = clock();
	cout << "The time is " << (double)(copy_end - copy_start) / CLOCKS_PER_SEC << "s.\n";
	system("pause");
    return 0;
}

