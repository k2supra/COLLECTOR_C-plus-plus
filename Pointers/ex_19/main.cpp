#include <iostream>
using namespace std;


int main() {
	int num1, num2;
	char chaar{};
	cout << "Enter 1 number ->";
	cin >> num1;
	cout << "Enter 2 number ->";
	cin >> num2;
	int *pnum1 = &num1, *pnum2 = &num2;
	cout << "Enter [ + | - | * | / ] -> ";
	cin >> chaar;
	switch (chaar)
	{
	case '+': 
	{
		cout << *pnum1 << " + " << *pnum2 << " = " << *pnum1 + *pnum2;
	}break;
	case '-':
	{
		cout << *pnum1 << " - " << *pnum2 << " = " << *pnum1 - *pnum2;
	}break;
	case '*':
	{
		cout << *pnum1 << " * " << *pnum2 << " = " << *pnum1 * *pnum2;
	}break;
	case '/':
	{
		if (*pnum2 == 0)
		{
			cout << "It`s unreal";
		}
		cout << *pnum1 << " / " << *pnum2 << " = " << *pnum1 / *pnum2;
	}break;
	default:
		break;
	}
}