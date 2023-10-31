#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Reservoir
{
public:
	explicit Reservoir(const string& name = "", double width = 0.0, double length = 0.0, double max_depth = 0.0)
		: _name(name), _width(width), _length(length), _max_depth(max_depth) {};
	double getVolume() const
	{
		return _width * _length * _max_depth;
	}
	double getArea() const
	{
		return _width * _length;
	}
	bool isOfSameType(const Reservoir& other) const
	{
		return _name == other._name;
	}
	bool operator<(const Reservoir& other) const
	{
		return getArea() < other.getArea();
	}
	Reservoir copy() const
	{
		return *this;
	}
	void setName(const string& name)
	{
		_name = name;
	}
	const string getName() const
	{
		return _name;
	}

private:
	string _name;
	double _width;
	double _length;
	double _max_depth;
};

int main()
{
	vector<Reservoir> reservoirs;
	reservoirs.emplace_back("Sea", 150.0, 150.0, 30.0);
	reservoirs.emplace_back("Lake", 10.0, 50.0, 10.0);
	reservoirs.emplace_back("Lake 2", 70.0, 20.0, 3.0);
	cout << "1 - Print all\n2 - Compair ";
	int choice;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		for (const Reservoir& res : reservoirs)
		{
			cout << "Name: " << res.getName() << endl;
			cout << "Volume: " << res.getVolume() << endl;
			cout << "Area: " << res.getArea() << endl;
			cout << endl;
		}
	}break;
	case 2:
	{
		cout << "Enter 1 number of lake to compair: ";
		int number_1;
		cin >> number_1;
		cout << "Enter 2 number of lake to compair: ";
		int number_2;
		cin >> number_2;
		if (number_1 < reservoirs.size()+1 && number_2 < reservoirs.size()+1)
		{
			if (reservoirs[number_1-1] < reservoirs[number_2-1])
			{
				cout << "The first is smaller" << endl;
			}
			else
			{
				cout << "The first is bigger" << endl;
			}
		}
		else
		{
			cout << "Invalid lake numbers entered." << endl;
		}
	}break;
	default:
		break;
	}
}