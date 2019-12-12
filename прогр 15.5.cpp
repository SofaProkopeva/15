#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, a, b;
	a = 0;
	b = 0;
	cout << "Введите размер массива N: ";
	cin >> N;
	int* g = new int[N];
	cout << "Введите значения массива: ";
	for (int i = 0; i < N; i++)
	{
		cin >> g[i];
	}
	for (int i = 1; i < N; i++)
	{
		if (g[i] < g[b])
		{
			a = g[i];
			g[i] = g[b];
			g[b] = a;
			b = i;
		}
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < N; i++)
	{
		cout << g[i] << " ";
	}
}