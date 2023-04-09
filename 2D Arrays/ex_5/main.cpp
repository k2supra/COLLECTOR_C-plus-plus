#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time_t(0));
	const int size1 = 5;
	const int size2 = 10;
	int arr1[size1][size2]{};
	int arr2[size1][size1]{};
	for (size_t i = 0; i < size1; i++)
	{
		for (size_t j = 0; j < size2; j++)
		{
			arr1[i][j] = 0 + rand() % +51;
			cout << arr1[i][j] << "\t";
			if (j & 1)
			{
				arr2[i][j] = arr1[i][j - 1] + arr1[i][j];
			}
		}
		cout << endl;
	}
	cout << "\n**********\n\n";
	cout << "\nB:\n";
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size1; j++)
			cout << arr2[i][j] << "\t";
		cout << endl;
	}
	/*for (size_t i = 0; i < size1; i++)
	{
		for (size_t j = 0; j < size1; j++)
		{
			arr2[i][j] = arr1[i][j] + arr1[i][j+1];
			cout << arr2[i][j] << "\t";
		}
		cout << endl;
	}*/
}