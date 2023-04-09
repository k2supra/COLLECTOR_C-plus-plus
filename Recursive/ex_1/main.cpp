#include <iostream>
#include <ctime>
using namespace std;

void max1_max2_max3(int arr[], int max1, int size);
int** max1_max2_max3(int arr2d[10][10], int max2, int size);
double max1_max2_max3(int arr3d[10][10][10], int max3, int size);
float max1_max2_max3(int max1, int max2, int max3);


int main() {
	srand(time(0));
	const int size = 10;
	int arr[size]{};
	int arr2d[size][size]{};
	int arr3d[size][size][size];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 100 - rand() % 201;
		cout << arr[i] << "\t";
	}cout << endl;
	cout << "\n\n\n";
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			arr2d[i][j] = 100 - rand() % 201;
			cout << arr2d[i][j] << "\t";
		}cout << endl;
	}
	cout << "\n\n\n";
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			for (size_t k = 0; k < size; k++)
			{
				arr3d[i][j][k] = 100 - rand() % 201;
				cout << arr3d[i][j][k] << "\t";
			}cout << endl;
		}
	}
	int max1 = arr[0];
	int max2 = arr2d[0][0];
	int max3 = arr3d[0][0][0];
	max1_max2_max3(arr, max1, size);
	max1_max2_max3(arr2d, max2, size);
	max1_max2_max3(arr3d, max3, size);
	max1_max2_max3(max1, max2, max3);
}

void max1_max2_max3(int arr[], int max1, int size) {
	for (size_t i = 0; i < size; i++)
	{
		if (max1 < arr[i])
		{
			max1 = arr[i];
		}
	}cout << endl;
	cout << "\n1 array Max = " << max1;
	return ;
}

int** max1_max2_max3(int arr2d[10][10], int max2, int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (max2 < arr2d[i][j])
			{
				max2 = arr2d[i][j];
			}
		}
	}cout << endl;
	cout << "\n2 array Max = " << max2;
	return 0;
}

double max1_max2_max3(int arr3d[10][10][10], int max3, int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			for (size_t k = 0; k < size; k++)
			{
				if (max3 < arr3d[i][j][k])
				{
					max3 = arr3d[i][j][k];
				}
			}
		}
	}cout << endl;
	cout << "\n3 array Max = " << max3;
	return 0;
}

float max1_max2_max3(int max1, int max2, int max3) {
	if (max1 > max2)
	{
		cout << '\n' << max1 << " > " << max2;
	}
	else if (max1 < max2)
	{
		cout << '\n' << max1 << " < " << max2;
	}
	return 0;
}