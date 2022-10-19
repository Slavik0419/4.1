// Lab_04_1.cpp
// < Царук В'ячеслав >
// Лабораторна робота № 4.1
// Цикли
// Варіант 25 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double k, N;
	double M;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	M = 1;
	k = N;
	while (k <= 19)
	{
		
		M *= ((k-N)/(k+N))+1;
		k++;
	}
	cout << M << endl;
		M = 1;
	k = N;
	do {
		M *= ((k - N) / (k + N)) + 1;
		k++ ;
	}
	while (k <= 19);
	cout << M << endl;
	M = 1;
	for (k = N; k <= 19; k++)
	{
		M *= ((k - N) / (k + N)) + 1;
	}
	cout << M << endl;
	M = 1;
	for (k = 19; k >= N; k--)
	{
		M *= ((k - N) / (k + N)) + 1;
	}
	cout << M << endl;
	return 0;
}