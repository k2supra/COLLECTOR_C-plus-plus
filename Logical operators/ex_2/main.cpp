#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {
	cout << "Enter 7 numbers";
	int num1, num2, num3, num4, num5, num6, num7;
	cout << "Enter 1st number", cin >> num1;
	cout << "Enter 2nd number", cin >> num2;
	cout << "Enter 3rd number", cin >> num3;
	cout << "Enter 4th number", cin >> num4;
	cout << "Enter 5th number", cin >> num5;
	cout << "Enter 6th number", cin >> num6;
	cout << "Enter 7th number", cin >> num7;
	int max1;
	max1 = max(num1, num2);

	int max2;
	max2 = max(num3, num4);

	int max3;
	max3 = max(num5, num6);
	//*************************//
	int max37;
	max37 = max(max3, num7);

	int max12;
	max12 = max(max1, max2);
	//*************************//
	int maxall;
	maxall = max(max12, max37);

	cout << maxall;

}
