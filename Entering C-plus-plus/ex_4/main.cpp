#include <iostream>
#include <math.h>
#include <numeric>
#include <string.h>

using namespace std;

void sum()
{
	cout << "TASK: SUM\n Enter a number < 500 and program will count sum from number to 500" << endl;
	cout << "Enter a number: ";
	int a;
	cin >> a;
	int sum = 0;
	for (size_t i = a; i <= 500; i++)
	{
		sum += i;
	}
	cout << "Result: " << sum;
}

void power() 
{
	cout << "TASK: POWER\n Enter 2 numbers and program will count power of 1 number to the 2 power" << endl;
	cout << "Enter 1 number: ";
	int a;
	cin >> a;
	cout << "Enter 2 number: ";
	int b;
	cin >> b;
	cout << "Result: " << pow(a, b);
}

void avg()
{
	cout << "TASK: AVG\n Average number from 1 to 1000" << endl;
	int sum = 0;
	double res;
	for (size_t i = 1; i <= 1000; i++)
	{
		sum += i;
	}
	res = sum / 1000;
	cout << "Result: " << res;
}

void to20()
{
	cout << "TASK: PRODUCT \n Count product from your number to 20(include)" << endl;
	cout << "Enter a number";
	int a;
	cin >> a;
	int res = 1;
	for (size_t i = a; i <= 20; i++)
	{
		res *= i;
	}
	cout << "Result: " << res;
}

void listofproduct()
{
	cout << "TASK: LIST OF PRODUCT \n Print a list of product for your number" << endl;
	cout << "Enter a number: ";
	int a;
	cin >> a;
	for (size_t i = 1; i <= 10; i++)
	{
		cout << a << " * " << i << " = " << a * i << endl;
	}
}

void pairof()
{
	cout << "TASK: PAIR NUMBERS \n Print numbers from 100 to 999 that have 2 same numbers" << endl;
	int count = 0;

	for (int num = 100; num <= 999; num++) {
		int ones = num % 10;
		int tens = (num / 10) % 10;
		int hundreds = num / 100;

		if (ones == tens || tens == hundreds || ones == hundreds) {
			count++;
		}
	}
	cout << "Result: " << count;
}

void notpairof()
{
	cout << "TASK: NON PAIR NUMBERS \n Print numbers from 100 to 999 that don`t have the same numbers" << endl;
	int count = 0;

	for (int num = 100; num <= 999; num++) {
		int ones = num % 10;
		int tens = (num / 10) % 10;
		int hundreds = num / 100;

		if (ones != tens && tens != hundreds && ones != hundreds) {
			count++;
		}
	}
	cout << "Result: " << count;
}

void delete3and6()
{
	cout << "TASK: DELETING\n Delete numbers 3 and 6 out of your number" << endl;
	cout << "Enter a number: ";
	string number;
	cin >> number;
	string res;
	for (char digit : number)
	{
		if (digit != '3' && digit != '6')
		{
			res += digit;
		}
	}
	if (res.empty()) {
		cout << "All numbers were deleted." << endl;
	}
	else {
		cout << "Result: " << res << endl;
	}
}

void deleteb()
{
	cout << "TASK: DELETING\n" << endl;
	cout << "Enter a number: ";
	int a;
	cin >> a;
	for (int b = 2; b <= a; b++) {
		if (a % (b * b) == 0 && a % (b * b * b) != 0) {
			cout << b << " ";
		}
	}
}

void cube()
{
	cout << "TASK: CUBING\n" << endl;
	cout << "Enter a number: ";
	int a;
	cin >> a;
	int sumOfDigits = 0;
	int number = a;
	while (a != 0) {
		sumOfDigits += a % 10;
		a /= 10;
	}
	if (pow(sumOfDigits, 3) == pow(number, 2)) {
		cout << "Third power (" << sumOfDigits << "^3) = " << number << "^2." << endl;
	}
	else {
		cout << "Third power of (" << sumOfDigits << "^3) != " << number << "^2." << endl;
	}
}

void without()
{
	cout << "TASK: WITH OUT\n Print numbers that your number divides with out remainder" << endl;
	cout << "Enter a number: ";
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			cout << i << " ";
		}
	}
}

void doublewithout()
{
	cout << "TASK: WITH OUT\n Print numbers that your numbers divides with out remainder" << endl;
	cout << "Enter 1 number: ";
	int a;
	cin >> a;
	cout << "Enter 2 number: ";
	int b;
	cin >> b;
	int minNumber = min(a, b);
	int maxNumber = max(a, b);

	for (int i = 1; i <= minNumber; i++) {
		if (a % i == 0 && b % i == 0) {
			std::cout << i << " ";
		}
	}
}

int main() {
	int choice;
	cout << "Enter a number 1-12: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		sum();
	}break;
	case 2:
	{
		power();
	}break;
	case 3:
	{
		avg();
	}break;
	case 4:
	{
		to20();
	}break;
	case 5:
	{
		listofproduct();
	}break;
	case 6:
	{
		pairof();
	}break;
	case 7:
	{
		notpairof();
	}break;
	case 8:
	{
		delete3and6();
	}break;
	case 9:
	{
		deleteb();
	}break;
	case 10:
	{
		cube();
	}break;
	case 11:
	{
		without();
	}break;
	case 12:
	{
		doublewithout();
	}break;
	default:
		break;
	}
	return 0;
}