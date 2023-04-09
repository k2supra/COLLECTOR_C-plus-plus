#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
	srand(time(0));
	const int size = 10;
	int arr[size];
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " subject: ";
		int grad;
		cin >> grad;
		arr[i] = grad;
	}
	system("cls");
	int operation;
	cout << "Enter a number of operation [1-3] -> ";
	cin >> operation;
	switch (operation)
	{
	case 1:
	{
		for (size_t i = 0; i < size; i++)
		{
			cout << i + 1 << " subject: ";
			cout << arr[i] << " " << endl;
		}
	}break;
	case 2:
	{
		cout << "\nEnter a subject where u wanna change a grade -> ";
		int sub;
		cin >> sub;
		cout << "\nEnter new grade -> ";
		int newgrade;
		cin >> newgrade;
		arr[sub - 1] = newgrade;
		cout << "\nNew array: \n";
		for (size_t i = 0; i < size; i++)
		{
			cout << i + 1 << " subject: ";
			cout << arr[i] << " " << endl;
		}
	}break;
	case 3:
	{
		cout << "Avg = ";
		double avg;
		int sum = 0;
		for (size_t i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		avg = (float)sum / size;
		cout << setprecision(2) << avg;
		if (avg >= 10.7)
		{
			cout << "\nU will get stepuha=)";
		}
		else
		{
			cout << "\nU will not get stepuha=)";
		}
	}break;
	default:
		break;
	}
}