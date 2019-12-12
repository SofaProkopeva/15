#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, a, b;
	cout << "Введите размер массива N: ";
	cin >> N;
	int* g = new int[N];
	cout << "Введите значения массива A: ";
	for (int i = 0; i < N; i++)
		cin >> g[i];
	int* f = new int[N];
	f[0] = g[0];
	a = g[0];
	cout << "Массив B: ";
	cout << f[0] << " ";
	for (int i = 1; i < N; i++)
	{
		a += g[i];
		f[i] = a / (i + 1);
		cout << f[i] << " ";
	}
}