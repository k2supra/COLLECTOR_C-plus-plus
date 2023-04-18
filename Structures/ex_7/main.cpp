#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Car
{
	string brand;
	string model;
	int year;
	int km;
};

int main() {

	Car cars[5];

	cars[0] = { "Toyota", "Corolla", 2018, 8000 };
	cars[1] = { "Honda", "Civic", 2020, 12000 };
	cars[2] = { "Hyundai", "Elantra", 2019, 5000 };
	cars[3] = { "Nissan", "GTR", 2019, 75000 };
	cars[4] = { "Lexus", "LS300", 2017, 6000 };

	ofstream write("cars.txt");
	for (size_t i = 0; i < 5; i++)
	{
		write << cars[i].brand << " " << cars[i].model << " " << cars[i].year << " " << cars[i].km << endl;
	}
	write.close();

	ifstream read("cars.txt");

	string line;
	while (getline(read, line))
	{
		string brand, model;
		int year, km;
		istringstream line_in(line);
		line_in >> brand >> model >> year >> km;
		if (km < 10000)
		{
			cout << brand << " " << model << " " << year << " " << km << endl;
		}
	}
	read.close();
}