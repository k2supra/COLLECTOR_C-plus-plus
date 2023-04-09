#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	int max{}, min = 999999, range1, range2;
	int c, l;
	const uint32_t size = 12;
	int arr[size];
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter your salary in " << i + 1 << " month: ";
		cin >> arr[i];
	}
	cout << "Enter a start of range: ";
	cin >> range1;
	cout << "Enter a finish of range: ";
	cin >> range2;
	for (size_t i = range1 - 1; i < range2; i++)
	{
		if (arr[i] > max)
			max = arr[i];
			l = i;
		if (arr[i] < min)
			min = arr[i];
			 c = i;
			

	}
	cout << "Max salary was in " << l + 1 << " month." << endl;
	cout << "\nMin salary was in " << c + 1 << " month." << endl;
	
	cout << "Min = " << min << ", Max = " << max << endl;
	cout << endl;
}