#include "pc.h"

// setters
void PC::setId(uint64_t i)
{
	id = i;
}

void PC::setBrand(const string& b)
{
	brand = b;
}

void PC::setModel(const string& m)
{
	model = m;
}

void PC::setProcessor(const string& p)
{
	processor = p;
}

void PC::setRam(int r)
{
	ram = r;
}

void PC::setStorage(int s)
{
	storage = s;
}

void PC::setGraphicsCard(const string& g)
{
	graphicsCard = g;
}

void PC::setOperatingSystem(const string& os)
{
	operatingSystem = os;
}
void PC::setPrice(int pr)
{
	price = pr;
}
void PC::setComments(const string& com)
{
	comments = com;
}

// getters
uint64_t PC::getId() const
{
	return id;
}

string PC::getBrand() const
{
	return brand;
}

string PC::getModel() const
{
	return model;
}

string PC::getProcessor() const
{
	return processor;
}

int PC::getRam() const
{
	return ram;
}

int PC::getStorage() const
{
	return storage;
}

string PC::getGraphicsCard() const
{
	return graphicsCard;
}

string PC::getOperatingSystem() const
{
	return operatingSystem;
}
int PC::getPrice() const
{
	return price;
}
string PC::getComments() const
{
	return comments;
}

// constructors
PC::PC()
{
	setId(0);
	setBrand("null");
	setModel("null");
	setProcessor("null");
	setRam(0);
	setStorage(0);
	setGraphicsCard("null");
	setOperatingSystem("null");
	setPrice(0);
	setComments("null");
}
PC::PC(const string& b) : PC()
{
	setBrand(b);
}
PC::PC(const string& b, const string& m) : PC(b)
{
	setModel(m);
}
PC::PC(const string& b, const string& m, const string& p) : PC(b, m)
{
	setProcessor(p);
}
PC::PC(const string& b, const string& m, const string& p, int r) : PC(b, m, p)
{
	setRam(r);
}
PC::PC(const string& b, const string& m, const string& p, int r, int s) : PC(b, m, p, r)
{
	setStorage(s);
}
PC::PC(const string& b, const string& m, const string& p, int r, int s, const string& g) : PC(b, m, p, r, s)
{
	setGraphicsCard(g);
}
PC::PC(const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os) : PC(b, m, p, r, s, g)
{
	setOperatingSystem(os);
}
PC::PC(const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os, int pr) : PC(b, m, p, r, s, g, os)
{
	setPrice(pr);
}
PC::PC(const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os, int pr, const string& c) : PC(b, m, p, r, s, g, os, pr)
{
	setComments(c);
}
PC::PC(uint64_t i, const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os, int pr, const string& c) : PC(b, m, p, r, s, g, os, pr, c)
{
	setId(i);
}

// destructors
PC::~PC()
{
	id = 0;
	brand = "null";
	model = "null";
	processor = "null";
	ram = 0;
	storage = 0;
	graphicsCard = "null";
	operatingSystem = "null";
	price = 0;
	comments = "null";
}

