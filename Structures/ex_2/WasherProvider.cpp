#include "WasherProvider.h"

void WasherProvider::PrintWasher(Washer* washer)
{
	cout << ">-----------------------------------------<" << endl;
	cout << "Id: " << washer->getId() << endl;
	cout << "Name: " << washer->getName() << endl;
	cout << "Model: " << washer->getModel() << endl;
	cout << "Color: " << washer->getColor() << endl;
	cout << "Min temperature: " << washer->getMinTemp() << endl;
	cout << "Max temperature: " << washer->getMaxTemp() << endl;
	cout << "Smoke: " << washer->getSmoke() << endl;
	cout << "Power: " << washer->getPower() << endl;
	cout << ">-----------------------------------------<" << endl;
	cout << endl;
}

void WasherProvider::CreateWasher(Washer*& washer)
{
	uint64_t id;
	string name;
	string color;
	string model;
	int minTemp;
	int maxTemp;
	int power;
	string smoke;

	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter color: ";
	getline(cin, color);
	cout << "Enter model: ";
	getline(cin, model);
	cout << "Enter min temperature: ";
	cin >> minTemp;
	cout << "Enter max temperature: ";
	cin >> maxTemp;
	cout << "Enter power: ";
	cin >> power;
	cin.ignore();
	cout << "Enter smoke: ";
	getline(cin, smoke);
	
	cout << ">----------------------------<" << endl;
	washer->setName(name);
	washer->setColor(color);
	washer->setModel(model);
	washer->setMaxTemp(maxTemp);
	washer->setMinTemp(minTemp);
	washer->setPower(power);
	washer->setSmoke(smoke);
}