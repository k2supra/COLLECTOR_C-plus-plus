#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int** arr2d(int n, int m)
{
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	return arr;
}
void setrand2d(int** arr, int n, int m, int a = 1, int b = 9)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = a + rand() % (b - a + 1);
		}
	}
}
void printarray2d(int** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}
}
void sort(int** arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			int index = j;
			int minEl = arr[i][j];
			for (int p = j; p < m; p++)
			{
				if (minEl > arr[i][p])
				{
					index = p;
					minEl = arr[i][p];
				}
			}
			swap(arr[i][j], arr[i][index]);
		}
	}
}
int mineldig(int** arr, int n)
{
	int min = arr[0][0];
	for (int i = 1; i < n; i++)
		if (min > arr[i][i]) min = arr[i][i];
	return min;
}
int maxeldig(int** arr, int n)
{
	int max = arr[0][0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i][i])
		{
			max = arr[i][i];
		}
	}return max;
}

int main() {
	int n = 5, m = n;
	int** arr = arr2d(n, m);
	srand(time(0));
	setrand2d(arr, n, m);
	cout << "Source array:\n";
	printarray2d(arr, n, m);
	sort(arr, n, m);
	cout << "\nSorted array:\n";
	printarray2d(arr, n, m);
	cout << "\nMinimal element on diagonal: " << mineldig(arr, n) << endl;
	cout << "Maximum element on diagonal: " << maxeldig(arr, n) << endl;
}
