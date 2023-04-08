#include "WasherProvider.h"

void WasherProvider::PrintWasher(Washer* washer)
{
	cout << ">-----------------------------------------<" << endl;
	cout << "Id: " << washer->getId() << endl;
	cout << "Name: " << washer->getName() << endl;
	cout << "Color: " << washer->getColor() << endl;
	cout << "Width: " << washer->getWidth() << endl;
	cout << "Streight: " << washer->getStreight() << endl;
	cout << "Height: " << washer->getHeight() << endl;
	cout << "Power: " << washer->getPower() << endl;
	cout << "Speed: " << washer->getSpeed() << endl;
	cout << "Temperature: " << washer->getTemp() << endl;
	cout << ">-----------------------------------------<" << endl;
	cout << endl;
}

void WasherProvider::CreateWasher(Washer*& washer)
{
	uint64_t id;
	string name;
	string color;
	int width;
	int height;
	int streight;
	int power;
	int speed;
	int temp;

	cout << "Enter name: ";
	getline(cin, name);
	cout << "Enter color: ";
	getline(cin, color);
	cout << "Enter width: ";
	cin >> width;
	cout << "Enter streight: ";
	cin >> streight;
	cout << "Enter height: ";
	cin >> height;
	cout << "Enter power: ";
	cin >> power;
	cout << "Enter speed: ";
	cin >> speed;
	cout << "Enter temperature: ";
	cin >> temp;
	cin.ignore();
	cout << ">----------------------------<" << endl;
	washer->setName(name);
	washer->setColor(color);
	washer->setWidth(width);
	washer->setHeight(height);
	washer->setStreight(streight);
	washer->setPower(power);
	washer->setSpeed(speed);
	washer->setTemp(temp);
}