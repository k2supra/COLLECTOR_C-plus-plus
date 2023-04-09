
#include "IdProvider.h"

struct Washer
{
private:
	uint64_t id;
	string name;
	string color;
	string model;
	int minTemp;
	int maxTemp;
	int power;
	string smoke;

	
public:
	void setId(uint64_t id);
	void setName(string name);
	void setColor(string color);
	void setModel(string model);
	void setMinTemp(int minTemp);
	void setMaxTemp(int maxTemp);
	void setPower(int power);
	void setSmoke(string smoke);

	uint64_t getId();
	string getName();
	string getColor();
	string getModel();
	int getMinTemp();
	int getMaxTemp();
	int getPower();
	string getSmoke();


	Washer();
	Washer(IdProvider id);
	Washer(IdProvider id, string name, string color);
	Washer(IdProvider id, string name, string color, string model);
	Washer(IdProvider id, string name, string color, string model, int minTemp);
	Washer(IdProvider id, string name, string color, string model, int minTemp, int maxTemp);
	Washer(IdProvider id, string name, string color, string model, int minTemp, int maxTemp, int power);
	Washer(IdProvider id, string name, string color, string model, int minTemp, int maxTemp, int power, string smoke);

	~Washer();
};
