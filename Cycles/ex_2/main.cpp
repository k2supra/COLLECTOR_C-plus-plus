#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number -> ";
	cin >> num;
	for (size_t i = 1; i < num + 1; i++)
	{
		if (num % i == 0)
		{
			cout << "\n = " << i;
		}
	}
}