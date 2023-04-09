#include <iostream>
#include <ctime>
using namespace std;


int main() {
	srand(time(0));
	int* size = new int(0);
	int sum = 0;
	cout << "Enter a size ->";
	cin >> *size;
	int* arr = new int[*size];
	for (size_t i = 0; i < *size; i++)
	{
		*(arr + i) = 50 - rand() % 101;
		cout << *(arr + i) << '\t';
		sum += *(arr + i);
	}
	cout << "\nSum = " << sum;
}