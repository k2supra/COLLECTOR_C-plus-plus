#include <iostream>
using namespace std;

int main() {
	int num, numb;
	cout << "Enter a number -> ";
	cin >> num;
	cout << "Enter a number -> ";
	cin >> numb;
	for (size_t i = 1; i < num + 1; i++)
	{
		if (i % (numb * numb) == 0 && i % (numb * numb * numb) != 0)
		{
			cout << "\n = " << i;
		}
	}
}