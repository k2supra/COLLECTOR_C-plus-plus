#include "string_lib.h"

using namespace std;

int mystrlen(const char* str) 
{
	int counter = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	cout << "\nLenght [" << counter << "]";
	return 0;
}

char* mysrtcpy(char* str1, const char* str2)
{
	
	char* result = str1;
	do
	{
		*result++ = *str2++;
	} while (*str2 != '\0');

	*result = '\0';
	cout << "Result [" << str1 << "]";
	return 0;
}

char* mystrcat(char* str1, const char* str2)
{
	char* result = str1;
	while (*str1 != '\0') {
		str1++;
	}
	while (*str2 != '\0') {
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
	cout << "\nResult [" << str1 << "]";
	return 0;
}

char* mystrchr(char* str, char s) 
{
	int counter = 0;
	do
	{
		if (*str == s)
		{
			return str;
		}
		str++;
	} while (*str != '\0');
	
	if (*str == s)
	{
		return str;
	}

	return 0;
}

char* mystrstr(char* str1, char* str2)
{
	do
	{
		char* res = str1;
		char* word = str2;
		do
		{
			str1++;
			word++;
		} while (*str1 != '\0' && *word != '\0' && *str1 == *word);

		if (*word == '\0')
		{
			return res;
		}
		str1 = res + 1;
	} while (*str1 != '\0');

	return 0;
}