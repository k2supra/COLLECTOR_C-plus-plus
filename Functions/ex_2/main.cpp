#include <iostream>

using namespace std;

class Overcoat
{
public:
	Overcoat(string t, double p) : type(t), price(p) {};
	
	bool operator==(const Overcoat& other) const
	{
		return type == other.type && price == other.price;
	}
	Overcoat& operator=(const Overcoat& other)
	{
		if (this != &other)
		{
			type = other.type;
			price = other.price;
		}
		return *this;
	}
	bool operator>(const Overcoat& other) const
	{
		return price > other.price;
	}
	void print()
	{
		cout << "Type: " << type << " - Price: " << price << endl;
	}

private:
	string type;
	double price;
};

int main()
{
	Overcoat over1("Winter", 150.0);
	Overcoat over2("Summer", 150.0);
	Overcoat over3("Spring", 100.0);

	if (over1 == over2)
	{
		cout << "The same type" << endl;
	}
	else
	{
		cout << "Is`nt the same type" << endl;
	}

	over3 = over1;
	cout << "Overcoat 1: ";
	over1.print();
	cout << "Overcoat 3: ";
	over3.print();

	if (over2 > over3)
	{
		cout << "Overcoat 2 is more expensive than 3" << endl;
	}
	else
	{
		cout << "Overcoat 2 is not more expensive than 3" << endl;
	}
}