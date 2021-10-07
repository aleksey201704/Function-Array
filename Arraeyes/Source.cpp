#include <iostream>
#include <windows.h>

using  namespace std;
// ЗАполняет случайными числами

void FillRand(int arr[],const unsigned int n);
void Print(int arr[], const unsigned int n);
void ReversPrint(int arr[], const unsigned int n);
int Sum(int arr[], const unsigned int n);
void Avg(int arr[], const unsigned int n);




void  main()
{
	setlocale(LC_ALL, "Russian");
	const unsigned int n = 5;
	int arr[n];
	
	FillRand(arr, n);
	Print(arr, n);
	ReversPrint(arr, n);
	cout << endl << " Сумма = " << Sum(arr, n);

	Avg(arr, n);
	return;

}

void FillRand(int arr[], const unsigned int n) 
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

void ReversPrint(int arr[], const unsigned int n) 
{	
	cout << endl;
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
}

int Sum(int arr[], const unsigned int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s = s + arr[i];
	}
	return s;
}

void Avg(int arr[], const unsigned int n)
{
	cout << endl << "Среднне число = " << (double) Sum (arr,n) / n;
}