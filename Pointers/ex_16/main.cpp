#include <iostream>
using namespace std;


int main() {
	int num;
	cout << "Enter a number ->";
	cin >> num;
	int* pnum = &num;
	cout << "Res = " << *pnum;
	if (*pnum < 0)
	{
		cout << "\nNumber < 0";
	}
	else if (*pnum > 0)
	{
		cout << "\nNumber > 0";
	}
	else 
	{
		cout << "\nNumber = 0";
	}
}