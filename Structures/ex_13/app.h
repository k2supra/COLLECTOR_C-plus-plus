#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

struct Application
{
	string text;
	char date[10];
	Application()
	{
		strcpy_s(this->date, "10.04.23");
		this->text = text;
	}
	void Run()
	{
		cout << "SUCCESS" << endl;
	}
	void Stop()
	{
		cout << "STOP" << endl;
	}
	void print()
	{
		cout << "PRINTING" << endl;
		cout << "DATE " << this->date << endl;
		cout << "TEXT " << this->text << endl;
	}
	void Input()
	{
		cout << "ENTERING..." << endl;
		cout << "Enter date: ";
		cin >> this->date;
		cout << "Enter text: ";
		cin >> this->text;
	}
};