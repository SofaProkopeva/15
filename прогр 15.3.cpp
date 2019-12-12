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
		if (g[i] % 2 != 0)
		{
			a = g[i];
			b = i;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if ((g[i] % 2 != 0) && (i != b))
			g[i] += a;
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < N; i++)
	{
		cout << g[i] << " ";
	}
}
	
