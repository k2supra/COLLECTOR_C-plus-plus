#include <iostream>
#include <ctime>

using namespace std;

void bubbleSort(int arr[], const int size) {
	for (int step = 0; step < size; ++step) 
	{
		for (int i = 0; i < size - step; ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}

void printArray(int arr[], const int size) {
	for (int i = 0; i < size; ++i) {
		cout << " " << arr[i];
	}
	cout << "\n";
}

int main() {
	srand(time(0));
	const int size = 10;
	int arr[size]{};
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	bubbleSort(arr, size);
	cout << "\nSorted Array in Bubble:\n";
	printArray(arr, size);
}