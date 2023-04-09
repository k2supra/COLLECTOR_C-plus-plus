#include <iostream>
using namespace std;

int main() {
	int counter = 0;
	for (size_t i = 111; i < 999 + 1; i++)
	{

		int num1 = (i / 100) % 10;
		int num2 = (i / 10) % 10;
		int num3 = i % 10;
		if (num1 != num2 && num1 != num3 && num2 != num3)
		{
			counter += 1;
		}

	}
	cout << counter;
}
