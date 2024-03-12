#include <iostream>

using namespace std;

class Circle
{
public:
	Circle(int radius) : radius(radius) {};
	Circle(int radius, int length) : radius(radius), length(length) {};

	bool operator==(Circle& other)
	{
		return this->radius == other.radius;
	}

	bool operator>(Circle& other)
	{
		return this->length > other.length;
	}

	Circle& operator+=(int add)
	{
		this->radius += add;
		return *this;
	}
	Circle& operator-=(int min)
	{
		this->radius -= min;
		return *this;
	}
	friend ostream& operator<<(ostream& os, Circle& circle);
	~Circle()
	{
		radius = 0;
		length = 0;
	}
	

private:
	int radius;
	int length;
};

ostream& operator<<(ostream& os, Circle& circle)
{
	os << "Radius: " << circle.radius << ", Length: " << circle.length << endl;
	return os;
}

int main()
{
	Circle circle1(5), circle2(2), circle3(5);

	if (circle1 == circle2)
	{
		cout << "Similar" << endl;
	}
	else
	{
		cout << "Not similar" << endl;
	}
	if (circle1 == circle3)
	{
		cout << "Similar" << endl;
	}
	else
	{
		cout << "Not similar" << endl;
	}
	if (circle1 > circle2)
	{
		cout << "1 > 2" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	if (circle1 > circle3)
	{
		cout << "1 > 3" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	
	Circle circle4(5, 3), circle5(2, 3), circle6(5, 6);
	circle4 += 2;
	circle6 -= 1;
	cout << "Circle4: " << circle4 << "Circle5: " << circle5 << "Circle6: " << circle6 << endl;
}