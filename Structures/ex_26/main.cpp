#include <iostream>

using namespace std;

class Pet
{
public:
	Pet(string name, string type) : name(name), type(type) {};
	
	virtual void display()
	{
		cout << "Name: " << this->name << endl;
		cout << "Type: " << this->type << endl;
	}

protected:
	string name, type;
};

class Dog : public Pet
{
public:
	Dog(string name, string breed) : Pet(name, "Dog"), breed(breed) {};
	
	void display() override
	{
		Pet::display();
		cout << "Breed: " << this->breed << endl;
	}

private:
	string breed;
};

class Cat : public Pet
{
public:
	Cat(string name, string color) : Pet(name, "Cat"), color(color) {};

	void display() override
	{
		Pet::display();
		cout << "Color: " << this->color << endl;
	}

private:
	string color;
};

class Parrot : public Pet
{
public:
	Parrot(string name, string language) : Pet(name, "Parrot"), language(language) {};

	void display() override
	{
		Pet::display();
		cout << "Language: " << this->language << endl;
	}

private:
	string language;
};

int main()
{
	Dog dog("Will", "Golden Retriever");
	Cat cat("Wiskas", "Black");
	Parrot parrot("Alice", "Polish");

	dog.display();
	cat.display();
	parrot.display();
}