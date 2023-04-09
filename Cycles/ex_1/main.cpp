#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "Enter 1st number -> ";
	cin >> num1;
	cout << "Enter 2nd number -> ";
	cin >> num2;
	if (num1 > num2)
	{
		for (size_t i = 1; i < num2 + 1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				cout << "\n = " << i;
			}
		}
	}
	else if (num1 < num2)
	{
		for (size_t i = 1; i < num1 + 1; i++)
		{
			if (num1 % i == 0 && num2 % i == 0)
			{
				cout << "\n = " << i;
			}
		}
	}
	
}