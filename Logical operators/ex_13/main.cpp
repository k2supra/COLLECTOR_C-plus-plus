#include <iostream>

using namespace std;

class Flat
{
public:
	Flat(int area, int price)
	{
		this->area = area;
		this->price = price;
	};

	bool operator==(Flat& other)
	{
		return this->area == other.area;
	}
	Flat& operator=(Flat& other)
	{
		(this != &other) ? this->area = other.area, this->price = other.price : 0;
		return *this;
	}
	friend ostream& operator<<(ostream& os, Flat& flat);

	bool operator>(Flat& other)
	{
		return this->price > other.price;
	}

private:
	int area;
	int price;
};

ostream& operator<<(ostream& os, Flat& flat)
{
	os << "Area: " << flat.area << ", Price: " << flat.price << endl;
	return os;
}

int main()
{
	Flat flat1(10, 56), flat2(15, 52), flat3(10, 26);
	(flat1 == flat2) ? cout << "The same" << endl : cout << "Not the same" << endl;
	flat1 = flat3;
	cout << flat1;
	(flat1 > flat2) ? cout << "1 > 2" << endl : cout << "1 < 2" << endl;
	return 0;
}