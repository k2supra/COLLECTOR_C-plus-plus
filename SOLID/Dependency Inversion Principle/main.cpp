#include "dip.h"

int main()
{
	OrderProcessor* orderProc = new LocalOrder();
	Payment* pay = new CashPayment();

	HighLevel highLevel(orderProc, pay);

	highLevel.processOrd();
}