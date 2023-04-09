#include <iostream>
using namespace std;

int fin(int, int);

int main() {
	int num1, num2, res;
	cout << "Enter 1 number: ";
	cin >> num1;
	cout << "Enter 2 number: ";
	cin >> num2;

	res = fin(num1, num2);
	cout << res;
}

int fin(int num1, int num2) {
	if (num1 != num2 + 1)
	{
		return (num1 + fin(num1 + 1, num2));

	}
	else
	{
		return false;
	}

}