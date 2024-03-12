#include <iostream>

using namespace std;

class Airplane
{
public:
	Airplane(string type, int capacity, int max_capacity)
	{
		this->type = type;
		this->capacity = capacity;
		this->max_capacity = max_capacity;
	};
	
	bool operator==(Airplane& other)
	{
		return this->type == other.type;
	}
	Airplane& operator++(int add)
	{
		if (this->capacity + 50 > this->max_capacity)
		{
			cout << "Impossible, max capacity of plane is " << this->max_capacity << endl;
		}
		else
		{
			this->capacity += 50;
		}
		return *this;
	}
	Airplane& operator--(int min)
	{
		(this->capacity - 50 < 0) ? this->capacity = 0 : this->capacity -= 50;
		return *this;
	}
	bool operator>(Airplane& other)
	{
		return this->max_capacity > other.max_capacity;
	}
	friend ostream& operator<<(ostream& os, Airplane& aircraft);
private:
	string type;
	int capacity;
	int max_capacity;
};

ostream& operator<<(ostream& os, Airplane& aircraft)
{
	os << "Capacity: " << aircraft.capacity << endl;
	return os;
}

int main()
{
	Airplane aircraft1("Cargo", 250, 420), aircraft2("Cargo", 360, 420);
	(aircraft1 == aircraft2) ? cout << "The same type" << endl : cout << "Not the same type" << endl;
	aircraft1++;
	cout << aircraft1;
	aircraft2--;
	cout << aircraft2;
	(aircraft1 > aircraft2) ? cout << "aircraft1 > aircraft2" << endl : cout << "aircraft1 < aircraft2" << endl;
}