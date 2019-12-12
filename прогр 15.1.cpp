#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, a, b;
	cout << "Введите размер массива N: ";
	cin >> N;
	int* g = new int[N];
	int* f = new int[N];
	cout << "Введите значения массива A: ";
	for (int i = 0; i < N; i++)
		cin >> g[i];
	cout << "Введите значения массива B: ";
	for (int i = 0; i < N; i++)
		cin >> f[i];
	for (int i = 0; i < N; i++)
	{
		a = g[i];
		g[i] = f[i];
		f[i] = a;
	}
	cout << "Преобразованный массив A: ";
	for (int i = 0; i < N; i++)
		cout << g[i] << " ";
	cout << endl;
	cout << "Преобразованный массив B: ";
	for (int i = 0; i < N; i++)
		cout << f[i] << " ";
	cout << endl;
}
