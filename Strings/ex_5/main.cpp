#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cout << "Enter a text -> ";
	getline(cin, str);
	string rev_str = str;
	reverse(rev_str.begin(), rev_str.end());
	if (rev_str == str)
	{
		cout << "\n" << str << " is palindrom.";
	}
	else
	{
		cout << "\n" << str << " is not palindrom.";
	}
}