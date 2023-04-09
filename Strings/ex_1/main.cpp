#include <iostream>
#include <string>
#include <cstring>
#include "string_lib.h"

using namespace std;

int main() {
	cout << "Enter an operation [ 1 - lenght | 2 - copy | 3 - connect | 4 - find symbol | 5 - find world ] --> ";
	int operation;
	cin >> operation;
	
	
	switch (operation)
	{
	case 1: {
		char str[100];
		cout << "Enter a text -> ";
		cin >> str;
		mystrlen(str);
	}break;
	case 2: {
		char str1[100];
		const char str2[] = "OBEME";
		mysrtcpy(str1, str2);
	}break;
	case 3: {
		char str1[50] = "Hello";

		char str2[50] = "python";
		mystrcat(str1, str2);
	}break;
	case 4: {
		char s = 's';
		char str[50] = "Hello and welcome to Los Polas hrmano`s family.";
		char* result = mystrchr(str, s);
		cout << "Found in " << result - str + 1 << " position.";
	}break;
	case 5: {
		char str1[50] = "Hello and welcome to Los Polas hrmano`s family.";
		char str2[50] = "Los";
		char* result = mystrstr(str1, str2);
		cout << "Word was found in [ " << result - str1 << " ] position";
	}
	default:
		break;
	}
}