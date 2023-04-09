#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

void light(int arr[], const int size);

int main() {
	srand(time(0));
	const int size = 10;
	int arr[size]{};
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = -100 + rand() % +201;
		cout << arr[i] << "\t";
	}
	light(arr, size);
}
void light(int arr[], const int size) {
	for (size_t i = 2; i < size; i++)
	{
		if (arr[i] % i == 0 || arr[i] % i < i && arr[i] % i > 1)
		{
			cout << ". False: " << arr[i];
		}
		else
		{
			cout << ". True: " << arr[i];
		}
	}
}