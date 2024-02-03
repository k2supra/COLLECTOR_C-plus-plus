#include <iostream>

using namespace std;

template <typename T>
class Shape
{
public:
	virtual T calculatePerimeter() const = 0;

};

template <typename T>
class Triangle : public Shape<T>
{
public:
	Triangle(T side1, T side2, T side3) : side1(side1), side2(side2), side3(side3) {};

	T calculatePerimeter() const override
	{
		return side1 + side2 + side3;
	}

private:
	T side1, side2, side3;
};

template <typename T>
class Square : public Shape<T>
{
public:
	Square(T side) :side(side) {};
	
	T calculatePerimeter() const override
	{
		return side * 4;
	}

private:
	T side;
};

template<typename T>
class Pentagon : public Shape<T>
{
public:
	Pentagon(T side) : side(side) {};

	T calculatePerimeter() const override
	{
		return side * 5;
	}

private:
	T side;
};
