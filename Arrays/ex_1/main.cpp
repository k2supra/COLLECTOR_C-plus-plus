#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int main() {
	srand(time(0));
	const uint32_t size = 10;
	long long arr[size]{};
	int minusus = 0;
	int min = 999;
	int max = 0;
	long long mul = 1, parmul = 1;
	int sumel = 0;
	random_device random_device;
	mt19937 generator(random_device());
	for (size_t i = 0; i < size; i++)
	{
		uniform_int_distribution<> distribution(-10, 10);
		arr[i] = distribution(generator);
		mul *= arr[i];
		if (arr[i] < 0)
		{
			minusus += arr[i];
		}
		if (min < arr[i])
		{
			min = arr[i];
		}if (max > arr[i])
		{
			max = arr[i];
		}
		if (arr[i] % 2 == 0)
		{
			parmul *= arr[i];
		}
		if (arr[i] > min && arr[i] < 0)
		{
			sumel += arr[i];
		}
		
		cout << arr[i] << '\t';
	}
	cout << "\nSum = " << minusus;
	cout << "\nMul between min and max = " << mul;
	cout << "\nMul of pair numbers = " << parmul;
	cout << "\nSum of between = " << sumel;
}