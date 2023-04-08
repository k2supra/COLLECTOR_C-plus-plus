
#include "IdProvider.h"

struct Washer
{
private:
	uint64_t id;
	string name;
	string color;
	int width;
	int height;
	int streight;
	int power;
	int speed;
	int temp;
	
public:
	void setId(uint64_t id);
	void setName(string name);
	void setColor(string color);
	void setWidth(int width);
	void setHeight(int height);
	void setStreight(int streight);
	void setPower(int power);
	void setSpeed(int speed);
	void setTemp(int temp);

	uint64_t getId();
	string getName();
	string getColor();
	int getWidth();
	int getHeight();
	int getStreight();
	int getPower();
	int getSpeed();
	int getTemp();


	Washer();
	Washer(IdProvider id);
	Washer(IdProvider id, string name, string color);
	Washer(IdProvider id, string name, string color, int width);
	Washer(IdProvider id, string name, string color, int width, int height);
	Washer(IdProvider id, string name, string color, int width, int height, int streight);
	Washer(IdProvider id, string name, string color, int width, int height, int streight, int power);
	Washer(IdProvider id, string name, string color, int width, int height, int streight, int power, int speed, int temp);

	~Washer();
};
