#include <iostream>
#include <ctime>

using namespace std;

void Action(int*& array_1, int*& array_2, int size_1, int size_2)
{
	cout << "\nEnter a choise [ 1 - max | 2 - min | 3 - avg ] ";
	int ch;
	cin >> ch;

	switch (ch)
	{
	case 1: {
		void Max(int*& array_1, int*& array_2, int size_1, int size_2); {
			int max1 = array_1[0];
			int max2 = array_2[0];
			for (size_t i = 0; i < size_1; i++)
			{
				if (max1 < array_1[i])
				{
					max1 = array_1[i];
				}
			}
			cout << "\nMax of 1 array = " << max1;
			for (size_t i = 0; i < size_2; i++)
			{
				if (max2 < array_2[i])
				{
					max2 = array_2[i];
				}
			}
			cout << "\nMax of 2 array = " << max2;
		}
	}break;
	case 2: {
		void Min(int*& array_1, int*& array_2, int size_1, int size_2); {
			int min1 = array_1[0];
			int min2 = array_2[0];
			for (size_t i = 0; i < size_1; i++)
			{
				if (min1 > array_1[i])
				{
					min1 = array_1[i];
				}
			}
			cout << "\nMin of 1 array = " << min1;
			for (size_t i = 0; i < size_2; i++)
			{
				if (min2 > array_2[i])
				{
					min2 = array_2[i];
				}
			}
			cout << "\nMin of 2 array = " << min2;
		}
	}break;
	case 3: {
		void Avg(int*& array_1, int*& array_2, int size_1, int size_2); {
			int avg1, avg2;
			int sum1 = 0, sum2 = 0;
			for (size_t i = 0; i < size_1; i++)
			{
				sum1 += array_1[i];
			}
			avg1 = sum1 / size_1;
			cout << "\nAvg of 1 array = " << avg1;

			for (size_t i = 0; i < size_2; i++)
			{
				sum2 += array_2[i];
			}
			avg2 = sum2 / size_2;
			cout << "\nAvg of 2 array = " << avg2;
		}
	}
	default:
		break;
	}
}


int main() {
	srand(time(0));
	int size_1, size_2;
	cout << "Enter 1 size: ";
	cin >> size_1;
	cout << "\nEnter 2 size: ";
	cin >> size_2;
	int* array_1 = new int[size_1];
	int* array_2 = new int[size_2];
	cout << "\n\n\n\tArray 1 \n\n";
	for (size_t i = 0; i < size_1; i++)
	{
		array_1[i] = rand() % 100;
		cout << array_1[i] << "\t";
	}
	cout << "\n\n\n\tArray 2 \n\n";
	for (size_t i = 0; i < size_2; i++)
	{
		array_2[i] = rand() % 100;
		cout << array_2[i] << "\t";
	}
	Action(array_1, array_2, size_1, size_2);
}