#include <iostream>
#include "function.h"

using namespace std;
int const n = 11;

int var1(int* m, int size)//вариант, когда сумма равна 1 элементу, массив инвертируется
{
	int t;
	for (int i = 0; i < size / 2; i++)
	{
		t = m[i];
		m[i] = m[size - i - 1];
		m[size - i - 1] = t;
	}
	return 0;
}

int var2(int* m, int size)//вариант, когда сумма меньше первого элемента массива, массив сортируется по возрастанию
{
	int i, j;
	int t;
	for (j = 0; j < size - 1; j++)
		for (i = 0; i < size - 1; i++)
		{
			if (m[i] > m[i + 1])
			{
				t = m[i];
				m[i] = m[i + 1];
				m[i + 1] = t;
			}
		}
	return 0;
}

int var3(int* m, int size)//вариант, когда сумма больше первого элемента массива, массив сортируется по убыванию
{
	int i, j;
	int t;
	for (j = 0; j < size - 1; j++)
		for (i = 0; i < size - 1; i++)
		{
			if (m[i] < m[i + 1])
			{
				t = m[i];
				m[i] = m[i + 1];
				m[i + 1] = t;
			}
		}
	return 0;
}

int(*choice(int* m, int size))(int* m, int size)
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)//суммируем элементы массива
	{
		sum = sum + m[i];
	}
	cout << sum << endl;

	if (m[0] == sum)//выбор варината
		return(var1);
	else if (m[0] > sum)
		return (var2);
	else if (m[0] < sum)
		return(var3);

}

double sum(double a, double b)//сложение
{
	return(a + b);
}

double substruct(double a, double b)//вычитание
{
	return(a - b);
}


void fold(double* mass, unsigned size, double(*funco)(double, double), double* acc)//вызов функции для работы с массивом
{
	unsigned i;
	*acc = funco(mass[0], mass[1]);
	for (i = 2; i < size; i++)
	{
		*acc = funco(*acc, mass[i]);
	}
}
