// 16.7.cpp -- Lotto function

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;
vector<int> Lotto(int cnum, int rnum);


int main()
{
	vector<int> winners;
	winners = Lotto(51, 6);
	cout << "Winners' number:\n";
	for (auto it = winners.begin(); it != winners.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	system("pause");
    return 0;
}

vector<int> Lotto(int cnum, int rnum)
{
	vector<int> ticket(cnum);
	for (int i = 0; i < cnum; i++)
	{
		ticket[i] = i + 1;
	}
	random_shuffle(ticket.begin(), ticket.end());
	vector<int> choose(rnum);
	for (int i = 0; i < rnum; i++)
	{
		choose[i] = ticket[i];
	}
	sort(choose.begin(), choose.end());
	return choose;
}