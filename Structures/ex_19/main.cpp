#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>

using namespace std;

class Person
{
public:
	Person() : fullname(nullptr) {};

	Person(const char* name) 
	{
		fullname = new char[strlen(name) + 1];
		strcpy(fullname, name);
	};

	Person(const Person& other)
	{
		fullname = new char[strlen(other.fullname) + 1];
		strcpy(fullname, other.fullname);
	};

	~Person()
	{
		delete[] fullname;
	}

	void print() const
	{
		cout << "Person: " << fullname << endl;
	}

private:
	char* fullname;
};

class Apartment
{
public:
	Apartment() : residents(nullptr), numberOfResidents(0) {};

	Apartment(const Person* people, int count)
	{
		numberOfResidents = count;
		residents = new Person[count];
		for (size_t i = 0; i < count; i++)
		{
			residents[i] = people[i];
		}
	};

	Apartment(const Apartment& other)
	{
		numberOfResidents = other.numberOfResidents;
		residents = new Person[numberOfResidents];
		for (size_t i = 0; i < numberOfResidents; i++)
		{
			residents[i] = other.residents[i];
		}
	}

	void print() const
	{
		cout << "Residents: " << endl;
		for (size_t i = 0; i < numberOfResidents; i++)
		{
			residents[i].print();
		}
	}

	~Apartment()
	{
		delete[] residents;
	};

private:
	Person* residents;
	int numberOfResidents;
};

class Home
{
public:
	Home() : apartments(nullptr), numberOfApartments(0) {};

	Home(const Apartment* flats, int count)
	{
		numberOfApartments = count;
		apartments = new Apartment[count];
		for (size_t i = 0; i < count; i++)
		{
			apartments[i] = flats[i];
		}
	}

	Home(const Home& other)
	{
		numberOfApartments = other.numberOfApartments;
		apartments = new Apartment[numberOfApartments];
		for (size_t i = 0; i < numberOfApartments; i++)
		{
			apartments[i] = other.apartments[i];
		}
	}

	void print() const
	{
		cout << "Home info: " << endl;
		for (size_t i = 0; i < numberOfApartments; i++)
		{
			apartments[i].print();
		}
	};

	~Home() 
	{
		delete[] apartments;
	};

private:
	Apartment* apartments;
	int numberOfApartments;
};

int main()
{
	Person person1("Bob Alice");
	Person person2("Nike Abibas");

	Person residents[] = { person1, person1 };
	Apartment apartment(residents, 2);

	Apartment apartments[] = {apartment};
	Home home(apartments, 1);

	home.print();
}