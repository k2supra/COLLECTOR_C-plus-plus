#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct Shop 
{
	string name;
	int amount;
	double price;
};

int main() 
{

	Shop goods[5];
	ofstream write("shop.txt");

	goods[0] = { "Fanta" , 17, 1.25 };
	goods[1] = { "Buisquit" , 3, 3.40 };
	goods[2] = { "Coca-cola_zero" , 50, 1.35 };
	goods[3] = { "Coffe" , 35, 2.30 };
	goods[4] = { "Romashka" , 3, 0.25 };

	for (size_t i = 0; i < 5; i++)
	{
		write << goods[i].name << " " << goods[i].amount << " " << goods[i].price << endl;
	}

	write.close();

	ifstream read("shop.txt");

	string line;

	while (getline(read, line))
	{
		string name;
		int amount;
		double price;
		istringstream ss(line);

		ss >> name >> amount >> price;

		if (amount > 10)
		{
			cout << name << " " << amount << " " << price << endl;
		}

	}

	read.close();
}