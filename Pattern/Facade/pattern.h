#include <iostream>

using namespace std;

class Worker1
{
public:
	void phrase1() { cout << "Hello, I`m worker 1" << endl; }
	void phrase2() { cout << "I can do 1 thing" << endl; }
};

class Worker2
{
public:
	void phrase1() { cout << "Hello, I`m worker 2" << endl; }
	void phrase3() { cout << "I can do 2 things" << endl; }
};

class Facade
{
public:
	Worker1* worker1;
	Worker2* worker2;

	Facade(Worker1* worker1 = nullptr, Worker2* worker2 = nullptr)
	{
		this->worker1 = worker1;
		this->worker2 = worker2;
	}

	~Facade()
	{
		delete worker1, worker2;
	}

	void printData()
	{
		this->worker1->phrase1();
		this->worker1->phrase2();
		this->worker2->phrase1();
		this->worker2->phrase3();
	}
};
