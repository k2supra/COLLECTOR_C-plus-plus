#include "Washer.h"

void Washer::setId(uint64_t id)
{
	this->id = id;
}
void Washer::setName(string name)
{
	(name.empty()) ? this->name = "NULL" : this->name = name;
}
void Washer::setColor(string color)
{
	(color.empty()) ? this->color = "NULL" : this->color = color;
}
void Washer::setWidth(int width)
{
	this->width = width;
}
void Washer::setHeight(int height)
{
	this->height = height;
}
void Washer::setStreight(int streight)
{
	this->streight = streight;
}
void Washer::setPower(int power)
{
	this->power = power;
}
void Washer::setSpeed(int speed)
{
	this->speed = speed;
}
void Washer::setTemp(int temp)
{
	this->temp = temp;
}

//getters
uint64_t Washer::getId()
{
	return id;
}
string Washer::getName()
{
	return name;
}
string Washer::getColor()
{
	return color;
}      
int Washer::getWidth()
{
	return width;
}
int Washer::getHeight()
{
	return height;
}
int Washer::getStreight()
{
	return streight;
}
int Washer::getPower()
{
	return power;
}
int Washer::getSpeed()
{
	return speed;
}
int Washer::getTemp()
{
	return temp;
}

//constructors
Washer::Washer()
{
	setId(0);
	setName("");
	setColor("");
	setWidth(0);
	setHeight(0);
	setStreight(0);
	setPower(0);
	setSpeed(0);
	setTemp(0);
}
Washer::Washer(IdProvider id) : Washer()
{
	setId(id.setIdFromGlobal());
}
Washer::Washer(IdProvider id, string name, string color) : Washer(id)
{
	setName(name);
	setColor(color);
}
Washer::Washer(IdProvider id, string name, string color, int width) : Washer(id, name, color)
{
	setWidth(width);
}
Washer::Washer(IdProvider id, string name, string color, int width, int height) : Washer(id, name, color, width)
{
	setHeight(height);
}
Washer::Washer(IdProvider id, string name, string color, int width, int height, int streight) : Washer(id, name, color, width, height)
{
	setStreight(streight);
}
Washer::Washer(IdProvider id, string name, string color, int width, int height, int streight, int power) : Washer(id, name, color, width, height, streight)
{
	setPower(power);
}
Washer::Washer(IdProvider id, string name, string color, int width, int height, int streight, int power, int speed, int temp) : Washer(id, name, color, width, height, streight, power)
{
	setSpeed(speed);
	setTemp(temp);
}

//destructor
Washer::~Washer()
{
	cout << "Deleted." << endl;
	this->width = 0;
	this->height = 0;
	this->name.clear();
	this->color.clear();
	this->streight = 0;
	this->power = 0;
	this->speed = 0;
	this->temp = 0;
}