#include <iostream>
using namespace std;

void swap(int* num1, int* num2) {
	int swapp;
	swapp = *num1;
	*num1 = *num2;
	*num2 = swapp;
}


int main() {
	int num1, num2;
	cout << "Enter 1 number: ";
	cin >> num1;
	cout << "Enter 2 number: ";
	cin >> num2;

	swap(&num1, &num2);
	cout << "Res -> " << num1 << "\t" << num2;
}