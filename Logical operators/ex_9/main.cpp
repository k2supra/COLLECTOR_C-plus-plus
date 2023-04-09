#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int operation;
	cout << "Enter number (1-7) ->", cin >> operation;
	switch (operation)
	{
	case 1:
	{
		cout << "Enter a number" << endl;
		int num;
		cin >> num;
		if (num % 2 == 0) {
			cout << num << " easy" << endl;
		}
		else
		{
			cout << " no" << endl;
		}
	}break;
	case 2:
	{
		cout << "Enter 2 numbers" << endl;
		int num_1, num_2;
		cout << "Enter 1 number ->", cin >> num_1;
		cout << "Enter 2 number ->", cin >> num_2;
		if (num_1 > num_2)
		{
			cout << num_2 << " less";
		}
		else if (num_1 < num_2)
		{
			cout << num_1 << " less";
		}
		else
		{
			cout << num_1 << " = " << num_2 << " similar";
		}
	}break;
	case 3:
	{
		cout << "Enter a number" << endl;
		int num;
		cout << "Enter number ->", cin >> num;
		if (num < 0)
		{
			cout << num << " < 0";
		}
		else if (num > 0)
		{
			cout << num << " > 0";
		}
		else
		{
			cout << num << " = 0";
		}
	}break;
	case 4:
	{
		cout << "Enter 2 numbers" << endl;
		int num_1, num_2;
		cout << "Enter 1 number ->", cin >> num_1;
		cout << "Enter 2 number ->", cin >> num_2;
		if (num_1 > num_2)
		{
			cout << num_2 << " " << num_1;
		}
		else if (num_2 > num_1)
		{
			cout << num_1 << " " << num_2;
		}
		else
		{
			cout << num_1 << " = " << num_2;
		}
	}break;
	case 5 :
	{
		cout << "Enter 5 numbers" << endl;
		int num_1, num_2, num_3, num_4, num_5;
		cout << "Enter 1st number ->", cin >> num_1;
		cout << "Enter 2nd number ->", cin >> num_2;
		cout << "Enter 3rd number ->", cin >> num_3;
		cout << "Enter 4th number ->", cin >> num_4;
		cout << "Enter 5th number ->", cin >> num_5;
		double avg;
		avg = (num_1 + num_2 + num_3 + num_4 + num_5) / 5;
		if (avg >= 4)
		{
			cout << "exam";
		}
		else
		{
			cout << "no";
		}
	}break;
	case 6:
	{
		int num;
		cout << "Enter number ->", cin >> num;
		if (num % 2 == 0)
		{
			cout << num / 2;
		}
		else
		{
			cout << num * 3;
		}
	}break;
	case 7:
	{
		
		double num_1, num_2;
		cout << "Enter 1 number ->", cin >> num_1;
		cout << "Enter 2 number ->", cin >> num_2;
		cout << "Enter [+ - * /] ->";
		operation = _getch();

		switch (operation)
		{
		case '+':
		{
			cout << num_1 + num_2;
		}break;
		case '-':
		{
			cout << num_1 - num_2;
		}break;
		case '*':
		{
			cout << num_1 * num_2;
		}break;
		case '/':
		{
			cout << num_1 / num_2;
		}break;
		default:
			break;
		}
	}
	default:
		break;
	}
	
}