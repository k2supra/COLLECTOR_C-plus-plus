#include <iostream>
#include <ctime>

using namespace std;

void printArray(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], const int size) {
    for (int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;

        while (key < arr[j] && j >= 0) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
	srand(time(0));
	const int size = 9;
	int arr[size]{};
    int sum = 0, avg;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = 100 - rand() % 201;
        sum += arr[i];
		cout << arr[i] << " ";
	}
    avg = sum / size;
    
    if (avg > 0)
    {
        insertionSort(arr, (size + 3)/2);
        cout << "\nSorted array in ascending order[2/3]:\n";
        printArray(arr, size);
    }
    else
    {
        insertionSort(arr, size / 3);
        cout << "\nSorted array in ascending order[1/3]:\n";
        printArray(arr, size);
    }
    
}