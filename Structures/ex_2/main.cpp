#include "WasherProvider.h"

int main()
{

	WasherProvider* Washer_provider = new WasherProvider();
	IdProvider id;              // name, color, model, min temp, max temp, smoke, power//
	Washer* washer = new Washer(id, "SAMSUNG", "White", "Turbo", 75, 90, 1000, "Yes");
	Washer_provider->PrintWasher(washer);
	id.incId();
	//cout << "Enter number of products: ";
	uint64_t size = 1;
	//cin >> size;
	//cout << endl;
	Washer** washers = new Washer *[size];
	for (size_t i = 0; i < size; i++)
	{
		washers[i] = new Washer(id);
		Washer_provider->CreateWasher(washers[i]);
		id.incId();
	}
	for (size_t i = 0; i < size; i++)
	{
		Washer_provider->PrintWasher(washers[i]);
	}
	

	return 0;
}