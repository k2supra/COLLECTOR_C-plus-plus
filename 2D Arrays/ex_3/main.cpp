#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(0));
	const int size = 10;
	int arr2d[size][size];
	int sum = 0;
	double avg;
	int min, max;
	min = 999;
	max = arr2d[0][0];
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			arr2d[i][j] = -20 + rand() % +41;
			cout << arr2d[i][j] << '\t';
			sum += arr2d[i][j];
			avg = sum / size;
			if (arr2d[i][j] > max)
			{
				max = arr2d[i][j];
			}
			if (arr2d[i][j] < min)
			{
				min = arr2d[i][j];
			}
		}cout << endl;
	}
	cout << "\nSum = " << sum;
	cout << "\nAvg = " << avg;
	cout << "\nMax = " << max;
	cout << "\nMin = " << min;
}