// 5.9.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;

	string word;
	int count = 0;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> word;

	while (word != "done")
	{
		if (bool(cin >> word) == true)
			count++;
	}
	
	cout << "You entered a total of " << count << " words." << endl;

	system("pause");
    return 0;
}

