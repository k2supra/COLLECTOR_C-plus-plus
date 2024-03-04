#include "pattern.h"

int main()
{
	Worker1* worker1 = new Worker1;
	Worker2* worker2 = new Worker2;

	Facade* facade = new Facade(worker1, worker2);
	facade->printData();
}