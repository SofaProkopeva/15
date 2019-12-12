#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, a, b, x;
	a = 100000000;
	b = 0;
	x = 0;
	int y = 0;
	cout << "Введите размер массива N: ";
	cin >> N;
	int* g = new int[N];
	cout << "Введите значения массива: ";
	for (int i = 0; i < N; i++)
	{
		cin >> g[i];
		if (a > g[i])
		{
			a = g[i];
			x = i;
		}
		if (b < g[i])
		{
			b = g[i];
			y = i;
		}
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < N; i++)
	{
		if (((i < x) && (i > y)) || ((i > x) && (i < y)))
			g[i] = 0;
		cout << g[i] << " ";
	}
}