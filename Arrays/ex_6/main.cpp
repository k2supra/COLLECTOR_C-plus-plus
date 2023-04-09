#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int operation;
	cout << "Enter number of task: ";
	cin >> operation;
	switch (operation)
	{
	case 1: {
		int lenght, height;
		char symbol;
		symbol = getchar();
		cout << "Enter lenght: ";
		cin >> lenght;
		cout << "Enter height: ";
		cin >> height;
		cout << "Enter symbol: ";
		cin >> symbol;


		for (size_t i = 0; i < height; i++)
		{
			for (size_t j = 0; j < lenght; j++)
			{
				cout << symbol;
			}
			cout << endl;
		}
	}break;
	case 2: {
		char n;
		int a = 0, b = 0, i = 0, j = 0, y = 0, e = 0;
		cout << "Enter symbol" << endl;cin >> n;
		cout << "Enter lenght" << endl;cin >> a;
		cout << "Enter height" << endl;cin >> b;
		for (i = 1;i <= a;i++) { cout << n; }cout << endl;
		for (j = 1;j <= (b - 2);j++) { cout << n;for (y = 1;y <= (a - 2);y++) { cout << " "; }cout << n << endl; }
		for (e = 1;e <= a;e++) { cout << n; }cout << endl;
	}break;
	case 3: {
		const uint32_t size = 6;
		int arr[size];
		double sum = 0;
		for (size_t it = 0; it < size; it++)
		{
			cout << "Salary = ";
			cin >> arr[it];
		}
		for (size_t i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		cout << " = " << sum;
	}break;
	case 4: {
		const uint32_t size = 6;
		int arr[size];
		double sum = 0;
		for (size_t it = 0; it < size; it++)
		{
			cout << "Enter numbers ";
			cin >> arr[it];
		}
		for (size_t i = size - 1; i != -1; i--)
		{
			cout << arr[i];
		}cout << endl;
	}break;
	case 5: {
		const uint32_t size = 5;
		int arr[size];
		double sum = 0;
		int i = 0;
		for (size_t it = 0; it < size; it++)
		{
			i++;
			cout << i << " side = ";
			cin >> arr[it];
		}
		for (size_t i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		cout << "Sum of all sides = " << sum;
	}break;
	case 6: {
		const uint32_t size = 12;
		int arr[size];
		int max = 0;
		int min = 990;
		int i = 0;
		double maxx, minn;
		for (size_t it = 0; it < size; it++)
		{
			i++;
			cout << i << " month = ";
			cin >> arr[it];
		}
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		cout << "Max = " << max << " and min = " << min << endl;
	}break;
	default:
		break;
	}
}