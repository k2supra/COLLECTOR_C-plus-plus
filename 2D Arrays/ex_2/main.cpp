#include <iostream>
#include <ctime>
using namespace std;

void minmax(int min, int max, int arr[], const int size);
int main() {
	srand(time_t(0));
	int min = 999;
	int max = 0;
	const int size = 10;
	int arr[size];
	minmax(min, max, arr, size);
}
void minmax(int min, int max, int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] < min)
		{
			min = arr[i];
		}
		else if(arr[i] > max)
		{
			max = arr[i];
		}
		cout << arr[i] << '\t';
	
	}cout << endl;
	cout << "\nMin = " << min << ". Max = " << max;
}