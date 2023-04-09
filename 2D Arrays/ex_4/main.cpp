#include <iostream>
#include <time.h>
using namespace std;
int main() {
	srand(time(0));
	const int size = 5;
	int m;
	int arr[size][size];
	int sumi = 0, sumj = 0;
	for (size_t i = 0; i < size; i++)
	{
		sumi = 0;
		for (size_t j = 0; j < size; j++)
		{
			arr[i][j] = -20 + rand() % +41;
			cout << arr[i][j] << '\t';
			if (arr[i][j])
				sumi += arr[i][j];
			
		}cout << "|" << sumi << "\t";cout << endl;
	}
	cout << "________________________________________\n";
	//cout << "*********" << arr[2][3];
	for (int sum, i = 0;i < size;i++) {
		sum = 0;
		for (int j = 0;j < size;j++)
			if (arr[j][i])
				sum += arr[j][i];
		cout << sum << "\t";
	}
}