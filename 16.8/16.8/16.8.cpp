// 16.8.cpp -- name container

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main()
{
	vector<string> mat_f, pat_f, total_f;
	cout << "Please enter Mat's friends (empty line to quit):\n";
	string temp;
	while (getline(cin, temp))
	{
		mat_f.push_back(temp);
		total_f.push_back(temp);
		if (temp[0] == '\0')
			break;
	}
	cout << "The following are Mat's friends:\n";
	sort(mat_f.begin(), mat_f.end());
	for (auto it = mat_f.begin(); it != mat_f.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl << endl;
	cout << "Please enter Pat's friends (empty line to quit):\n";
	while (getline(cin, temp))
	{
		pat_f.push_back(temp);
		total_f.push_back(temp);
		if (temp[0] == '\0')
			break;
	}
	cout << "The following are Pat's friends:\n";
	sort(pat_f.begin(), pat_f.end());
	for (auto it = pat_f.begin(); it != pat_f.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl << endl;
	sort(total_f.begin(), total_f.end());
	unique(total_f.begin(), total_f.end());
	cout << "There are " << total_f.size() << " friends to be invited in total:\n";
	for (auto it = total_f.begin(); it != total_f.end(); it++)
	{
		cout << *it << endl;
	}
	cout << endl;
	system("pause");
    return 0;
}

