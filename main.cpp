#include <iostream>
#include <ctime>
#include "function.h"

using namespace std;
int const n = 11;

int main()
{
	double m[] = { 3, 1, 2, 11, 7, 4, 5, 10, 6, 9, 8 };
	double result;

	system("chcp 1251");

	fold(m, 11, sum, &result);
	cout << "Сумма: " << result << endl;

	fold(m, 11, substruct, &result);
	cout << "Вычитание: " << result << endl;

	int mass[n];
	int i;
	int sum = 0;
	int k;
	int (*p)(int* m, int size);

	srand(time(NULL));// создание массива со случайными числами
	for (i = 0; i < n; i++)
	{
		mass[i] = rand() % 201 - 100;

	}

	for (i = 0; i < n; i++)
	{
		cout << mass[i] << " ";
	}
	cout << endl;

	p = choice(mass, n);
	p(mass, n);

	for (i = 0; i < n; i++)
	{
		cout << mass[i] << " ";
	}

	system("pause");
}