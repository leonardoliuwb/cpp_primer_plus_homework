// 4.6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

struct CandyBar
{
	char brand[20];
	float weight;
	int calorie;
};

int main()
{
	using namespace std;

	CandyBar snack[3] =
	{
		{"Mocha Munch",2.3,350},
		{"Fruit Salad",1.6,140},
		{"Fried Chicken",2.4,880}
	};

	cout << "The snack is following: " << endl;
	cout << "Brand: " << snack[0].brand << endl;
	cout << "Weight: " << snack[0].weight << endl;
	cout << "Calorie: " << snack[0].calorie << endl;
	cout << "Brand: " << snack[1].brand << endl;
	cout << "Weight: " << snack[1].weight << endl;
	cout << "Calorie: " << snack[1].calorie << endl;
	cout << "Brand: " << snack[2].brand << endl;
	cout << "Weight: " << snack[2].weight << endl;
	cout << "Calorie: " << snack[2].calorie << endl;

	system("pause");
    return 0;
}

