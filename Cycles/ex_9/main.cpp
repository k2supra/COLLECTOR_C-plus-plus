#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number < 20: ";
	int num;
	cin >> num;
	int dob = 1;
	do
	{
		num++;
		dob *= num;
	} while (num != 20);
	cout << "\n = " << dob;
}