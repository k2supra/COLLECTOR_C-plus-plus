#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char str[] = "Tesla cars are known for their sleek design and advanced technology features, including semi-autonomous driving capabilities and over-the-air software updates.";
	char space = ' ';
	int counter = 1;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == space)
		{
			counter++;
		}
	}
	cout << "\nWords [" << counter << "]";
}