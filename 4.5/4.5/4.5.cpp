// 4.5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

struct CandyBar
{
	char brand[20];
	float weight;
	int caloie;
};

int main()
{
	using namespace std;

	CandyBar snack =
	{
		"Mocha Munch",
		2.3,
		350
	};
	cout << "The snack is following:" << endl;
	cout << "Brand: " << snack.brand << endl;
	cout << "Wight: " << snack.weight << endl;
	cout << "Calorie: " << snack.caloie << endl;

	system("pause");
    return 0;
}

