#include <iostream>

using namespace std;

template <typename T1, typename T2>

class Base
{
public:
	T1 value1;
	T2 value2;

	Base(T1 value1, T2 value2) : value1(value1), value2(value2) {};

	void setValue(T1 value1, T2 value2)
	{
		this->value1 = value1;
		this->value2 = value2;
	}

	void getValue() const
	{
		cout << "Value1: " << this->value1 << "\nValue2: " << this->value2 << endl;
	}

	~Base() {};
};

template <typename T1, typename T2, typename T3, typename T4>

class Child1 : public Base<T1, T2>
{
public:
	T3 value3;
	T4 value4;

	Child1(T1 value1, T2 value2, T3 value3, T4 value4) : Base<T1, T2>(value1, value2), value3(value3), value4(value4) {};

	void setValue(T1 value1, T2 value2, T3 value3, T4 value4)
	{
		this->value1 = value1;
		this->value2 = value2;
		this->value3 = value3;
		this->value4 = value4;
	}

	void getValue() const
	{
		cout << "Value1: " << this->value1 << "\nValue2: " << this->value2 << "\nValue3: " << this->value3 << "\nValue4: " << this->value4 << endl;
	}

	~Child1() {};
};

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>

class Child2 : public Child1<T1, T2, T3, T4>
{
public:
	T5 value5;
	T6 value6;

	Child2(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6) : Child1<T1, T2, T3, T4>(value1, value2, value3, value4), value5(value5), value6(value6) {};

	void setValue(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6)
	{
		this->value1 = value1;
		this->value2 = value2;
		this->value3 = value3;
		this->value4 = value4;
		this->value5 = value5;
		this->value6 = value6;
	}

	void getValue() const
	{
		cout << "Value1: " << this->value1 << "\nValue2: " << this->value2 << "\nValue3: " << this->value3 << "\nValue4: " << this->value4 << "\nValue5: " << this->value5 << "\nValue6: " << this->value6 << endl;
	}

	~Child2() {};
};

int main()
{
	Base<int, double> base(1, 2.36);
	base.getValue();

	cout << endl;

	Child1<float, int, string, int> ch1(5.147, 3, "Hello", 6);
	ch1.getValue();

	cout << endl;

	Child2<float, int, string, int, int8_t, float> ch2(5.147, 3, "Hello", 6, 3, 6.99105);
	ch2.getValue();
}