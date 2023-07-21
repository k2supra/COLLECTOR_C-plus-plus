#pragma once
#include "../../lib/lib.h"

struct PC
{
public:
	// setters
	void setId(uint64_t i);
	void setBrand(const string& b);
	void setModel(const string& m);
	void setProcessor(const string& p);
	void setRam(int r);
	void setStorage(int s);
	void setGraphicsCard(const string& g);
	void setOperatingSystem(const string& os);
	void setPrice(int pr);
	void setComments(const string& com);

	// getters
	uint64_t getId() const;
	string getBrand() const;
	string getModel() const;
	string getProcessor() const;
	int getRam() const;
	int getStorage() const;
	string getGraphicsCard() const;
	string getOperatingSystem() const;
	int getPrice() const;
	string getComments() const;

	// constructors
	PC();
	explicit PC(const string& b);
	PC(const string& b, const string& m);
	PC(const string& b, const string& m, const string& p);
	PC(const string& b, const string& m, const string& p, int r);
	PC(const string& b, const string& m, const string& p, int r, int s);
	PC(const string& b, const string& m, const string& p, int r, int s, const string& g);
	PC(const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os);
	PC(const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os, int pr);
	PC(const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os, int pr, const string& c);
	PC(uint64_t i, const string& b, const string& m, const string& p, int r, int s, const string& g, const string& os, int pr, const string& c);

	// destructors
	~PC();

private:
	uint64_t id;
	string brand;
	string model;
	string processor;
	int ram;
	int storage;
	string graphicsCard;
	string operatingSystem;
	int price;
	string comments;
};
