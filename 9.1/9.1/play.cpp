// play.cpp

#include "stdafx.h"
#include "golf.h"
#include <iostream>

using namespace std;
int main()
{
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
	golf g[3];
	int i = 0;
	while ((i < 3) && (setgolf(g[i])))
	{
		showgolf(g[i]);
		cout << "Next golf:\n";
		i++;
	}
	golf leo;
	setgolf(leo, "Leonardo Liu", 28);
	handicap(leo, 1);
	showgolf(leo);
	system("pause");
	return 0;
}