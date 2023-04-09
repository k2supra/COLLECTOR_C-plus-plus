#include <iostream>
using namespace std;


int main() {
	int num1;
	cout << "Enter 1 number -> ";
	cin >> num1;
	int* num_1;
	num_1 = &num1;
	cout << "Result = " << num_1;

	int num2;
	cout << "\nEnter 2 number -> ";
	cin >> num2;
	int* num_2;
	num_2 = &num2;
	cout << "Result = " << num_2;
	if (*num_1 > *num_2)
	{
		cout << '\n' << num1 << " > " << num2;
	}
	else if (*num_1 < *num_2)
	{
		cout << '\n' << num1 << " < " << num2;
	}
	else
	{
		cout << '\n' << num1 << " = " << num2;
	}
}