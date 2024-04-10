#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Car
{
public:
	Car(string name, int year, double engineVolume, int price) : name(name), year(year), engineVolume(engineVolume), price(price) {};

	string name;
	int year;
	double engineVolume;
	int price;
};

void displayCar(const Car& other)
{
	cout << "Name: " << other.name << endl;
	cout << "Year: " << other.year << endl;
	cout << "Engine volume: " << other.engineVolume << endl;
	cout << "Price: " << other.price << endl;
}

class CarManager
{
public:
	void addCar(const Car& other)
	{
		cars.push_back(other);
	}

	void removeCar(int index)
	{
		cars.erase(cars.begin() + index);
	}

	void sortByPrice()
	{
		cout << "\nCars sorted by price:" << endl;
		sort(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) {return car1.price < car2.price;});
	}

	void sortByYear()
	{
		cout << "\nCars sorted by year:" << endl;
		sort(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) {return car1.year > car2.year;});
	}

	void displayCars()
	{
		cout << "All cars" << endl;
		for (const auto& data : cars)
		{
			displayCar(data);
			cout << endl;
		}
	}

	void searchByName(string searchName)
	{
		cout << "Cars with name '" << searchName << "':" << endl;
		for (const auto& car : cars) {
			if (car.name == searchName) {
				displayCar(car);
			}
		}
	}

private:
	vector<Car> cars;
};

int main()
{
	CarManager car_manager;

	car_manager.addCar(Car("Toyota Camry", 2020, 2.5, 25000));
	car_manager.addCar(Car("Honda Civic", 2018, 1.8, 18000));
	car_manager.addCar(Car("Ford Mustang", 2019, 5.0, 40000));
	car_manager.addCar(Car("Chevrolet Corvette", 2021, 6.2, 65000));

	car_manager.displayCars();
	cout << endl;

	car_manager.sortByPrice();
	car_manager.displayCars();
	cout << endl;

	car_manager.sortByYear();
	car_manager.displayCars();
	cout << endl;

	car_manager.searchByName("Ford Mustang");
	cout << endl;

	car_manager.removeCar(2);
	car_manager.displayCars();
}