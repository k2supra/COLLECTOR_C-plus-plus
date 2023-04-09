#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number less than 500 -> ";
	int number;
	cin >> number;
	if (number > 500)
	{
		cout << "!!!Enter number LESS than 500!!!";
	}
	int sum = 0;
	for (size_t i = number; i < 501; i++)
	{
		sum += i;
	}
	cout << "\nSum of all numbers between " << number << " and 500 is " << sum;
}