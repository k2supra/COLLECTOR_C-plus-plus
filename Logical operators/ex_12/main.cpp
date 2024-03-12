#include <iostream>

using namespace std;

class Overcoat
{
public:
	Overcoat(string type, int price)
	{
		this->type = type;
		this->price = price;
	};
	bool operator==(Overcoat& other)
	{
		return this->type == other.type;
	}
	Overcoat& operator=(Overcoat& other)
	{
		if (this != &other)
		{
			this->type = other.type;
			this->price = other.price;
		}
		return *this;
	}
	bool operator>(Overcoat& other)
	{
		return this->price > other.price;
	}
	~Overcoat()
	{
		this->type.clear();
		this->price = 0;
	};

private:
	string type;
	int price;
};

int main()
{
	Overcoat over1("Summer", 50), over2("Summer", 30), over3("Winter", 30);
	(over1 == over3) ? cout << "The same" << endl : cout << "Not the same" << endl;
	over1 = over3;
	(over1 > over2) ? cout << "1 > 2" << endl : cout << "1 < 2" << endl;
}