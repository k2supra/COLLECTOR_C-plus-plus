#include <iostream>
using namespace std;

int main() {
	cout << "Enter a number: ";
	int num;
	cin >> num;
	int dop = 0;
	do
	{
		num;
		dop++;
		cout << "\n" << num << " * " << dop << " = " << num * dop;
	} while (dop != 10);
}