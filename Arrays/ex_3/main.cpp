#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int min, max;
	srand(time(0));
	const uint32_t size = 10;
	int arr[size];
	min = 999;
	max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << "\t";
	} cout << endl;
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}cout << "Min = " << min << ", Max = " << max << endl;
}