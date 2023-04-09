#include <iostream>
using namespace std;

int fin(int, char);

int main() {
	int num, res;
	char symb;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a symbol: ";
	cin >> symb;
	cout << symb;
	res = fin(num, symb);
}

int fin(int num, char symb) {
	if (num < 2)
	{
		return 1;
	}
	cout << ' ' << symb;
	return fin(num - 1, symb);
}