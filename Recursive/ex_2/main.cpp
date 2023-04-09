#include <iostream>
#include <ctime>
using namespace std;

int min(int arr[], int index = 0, int sum = 0, int nowSum = 0, int cIndex = 0)
{
	if (cIndex == 100)
		return index;

	int newsum = nowSum + arr[cIndex];

	if (cIndex < 10)
		return min(arr, index, newsum, newsum, cIndex + 1);

	newsum = newsum - arr[cIndex - 10];
	if (newsum > sum)
		return min(arr, cIndex - 10, newsum, newsum, cIndex + 1);
	else
		return min(arr, index, sum, newsum, cIndex + 1);
}

int main()
{
	srand(time(0));
	const int size = 100;
	int arr[100]{};

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << "\n\n";
	cout << "The pos of min sum: " << min(arr);
}