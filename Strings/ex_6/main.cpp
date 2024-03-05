# define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class String
{
public:
	String(int size = 80)
	{
		str = new char[size + 1];
		count++;
	};
	String(const char* st)
	{
		str = new char[strlen(st) + 1];
		strcpy(str, st);
		count++;
	}
	String(const String& other)
	{
		str = new char[strlen(other.str) + 1];
		strcpy(str, other.str);
		count++;
	}

	void input()
	{
		cout << "Enter string: ";
		cin.getline(str, 80);

	}
	void print()
	{
		cout << "String: " << str << endl;
	}
	static int getCount()
	{
		return count;
	}
	~String()
	{
		delete[] str;
		count--;
	}

private:
	static int count;
	char* str;
};

int String::count = 0;

int main()
{
	String string;
	string.input();
	string.print();
	cout << "Count: " << string.getCount();
}