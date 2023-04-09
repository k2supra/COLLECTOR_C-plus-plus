#include <iostream>
#include <ctime>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void selectionSort(int arr[], const int size) {
	for (int step = 0; step < size - 1; step++)
	{
		int min_idx = step;
		for (int i = step + 1; i < size; i++)
		{
			if (arr[i] < arr[min_idx])
			{
				min_idx = i;
			}
		}
		swap(&arr[min_idx], &arr[step]);
	}
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
	selectionSort(arr, size);
	cout << "\n\nSorted array in Acsending Order:\n";
	printArray(arr, size);
}