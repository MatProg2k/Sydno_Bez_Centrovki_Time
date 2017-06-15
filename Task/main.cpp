#include "stdafx.h"
#include "Combination.h"
#include "Boat.h"
#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");

	ofstream file("Res.txt", ios::app);
	for (int i = 15; i < 35; i++)
	{
		clock_t start = clock();
		boat boat(i, 5, 1500, 100, 900, 10, 150);
		boat.start();
		clock_t stop = clock();
		file << " оличество городов: " << i << ", затраченное врем€: " << (long)(stop - start) << std::endl;
		cout << i << endl;
	}
	file.close();

	system("pause");
	return 0;
}