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
void Washer::setModel(string model)
{
	this->model = model;
}
void Washer::setMinTemp(int minTemp)
{
	this->minTemp = minTemp;
}
void Washer::setMaxTemp(int maxTemp)
{
	this->maxTemp = maxTemp;
}
void Washer::setPower(int power)
{
	this->power = power;
}
void Washer::setSmoke(string smoke)
{
	this->smoke = smoke;
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
string Washer::getModel()
{
	return model;
}
int Washer::getMinTemp()
{
	return minTemp;
}
int Washer::getMaxTemp()
{
	return maxTemp;
}
int Washer::getPower()
{
	return power;
}
string Washer::getSmoke()
{
	return smoke;
}


//constructors
Washer::Washer()
{
	setId(0);
	setName("");
	setColor("");
	setModel("");
	setMinTemp(0);
	setMaxTemp(0);
	setPower(0);
	setSmoke("");
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
Washer::Washer(IdProvider id, string name, string color, string model) : Washer(id, name, color)
{
	setModel(model);
}
Washer::Washer(IdProvider id, string name, string color, string model, int minTemp) : Washer(id, name, color, model)
{
	setMinTemp(minTemp);
}
Washer::Washer(IdProvider id, string name, string color, string model, int minTemp, int maxTemp) : Washer(id, name, color, model, minTemp)
{
	setMaxTemp(maxTemp);
}
Washer::Washer(IdProvider id, string name, string color, string model, int minTemp, int maxTemp, int power) : Washer(id, name, color, model, minTemp, maxTemp)
{
	setPower(power);
}
Washer::Washer(IdProvider id, string name, string color, string model, int minTemp, int maxTemp, int power, string smoke) : Washer(id, name, color, model, minTemp, maxTemp, power)
{
	setSmoke(smoke);
}

//destructor
Washer::~Washer()
{
	cout << "Deleted." << endl;
	this->minTemp = 0;
	this->maxTemp = 0;
	this->name.clear();
	this->color.clear();
	this->model.clear();
	this->power = 0;
	this->smoke.clear();
}