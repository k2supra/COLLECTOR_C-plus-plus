#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[] = "Tesla car is an electric vehicle produced by the American company Tesla, Inc. Tesla was one of the first companies to initiate mass production of electric vehicles. Tesla offers a wide range of models, including Model S, Model X, Model 3, and Model Y, which differ in size, power, and functionality.";
	int counter_number = 0;
	int counter_letter = 0;
	int counter_other;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (isdigit(str[i]))
		{
			counter_number++;
		}
		if (isalpha(str[i]))
		{
			counter_letter++;
		}
	}
	counter_other = strlen(str) - counter_letter - counter_number;
	cout << "\nNumbers [" << counter_number << "]";
	cout << "\nLetters [" << counter_letter << "]";
	cout << "\nOther symbols [" << counter_other << "]";
}