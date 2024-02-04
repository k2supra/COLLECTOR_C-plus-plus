#include <iostream>

using namespace std;

class OrderProcessor
{
public:
	virtual void processOrder() = 0;
};

class Payment
{
public:
	virtual void paymentProcess() = 0;
};

class HighLevel
{
public:
	OrderProcessor* orderProcessor;
	Payment* payment;

	HighLevel(OrderProcessor* orderProcessor, Payment* payment) : orderProcessor(orderProcessor), payment(payment) {};

	void processOrd()
	{
		orderProcessor->processOrder();
		payment->paymentProcess();
	}
};

class LocalOrder : public OrderProcessor
{
public:
	void processOrder() override
	{
		cout << "Processing order locally" << endl;
	}
};

class CashPayment : public Payment
{
public:
	void paymentProcess() override
	{
		cout << "Payment via cash" << endl;
	}
};
