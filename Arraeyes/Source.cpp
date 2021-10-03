#include <iostream>
#include <windows.h>

using  namespace std;
// ЗАполняет случайными числами

void FillRand(int arr[],const unsigned int n);
void Print(int arr[], const unsigned int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);

}

void FillRand(int arr[], const unsigned int n) 
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}