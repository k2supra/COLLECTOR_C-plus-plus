#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;

bool areParents(const string sent)
{
	stack<char> parentStack;
	unordered_map<char, char> matchingParent = {
		{'[', ']'},
		{'(', ')'},
		{'{', '}'},
	};

	for (char ch : sent)
	{
		if (matchingParent.find(ch) != matchingParent.end())
		{
			parentStack.push(ch);
		}
		else if (ch == ')' || ch == '}' || ch == ']')
		{
			if (parentStack.empty() || matchingParent[parentStack.top()] != ch)
			{
				return false;
			}
			parentStack.pop();
		}
	}
	return parentStack.empty();
}

int main()
{
	string text;
	cout << "Enter string: ";
	getline(cin, text);
	if (areParents(text))
	{
		cout << "Is normal" << endl;
	}
	else
	{
		cout << "Not normal";
	}
}