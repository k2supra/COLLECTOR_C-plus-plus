#include <iostream>
using namespace std;

int fin(int, int);

int main() {
	int num, step, res;
	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a number: ";
	cin >> step;
	res = fin(num, step);
	cout << num << " ^ " << step << " = " << res;
}

int fin(int num, int step) {
	if (step != 0)
	{
		return(num * fin(num, step - 1));
	}
	else
	{
		return 1;
	}
}