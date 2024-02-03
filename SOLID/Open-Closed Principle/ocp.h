#include <iostream>

using namespace std;

class Shape
{
public:
    virtual double calculateArea() const = 0;
};

class Circle : public Shape
{
public:
    Circle(double radius) : radius(radius) {}

    double calculateArea() const override
    {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};

class Rectangle : public Shape
{
public:
    Rectangle(double length, double width) : length(length), width(width) {}

    double calculateArea() const override
    {
        return length * width;
    }

private:
    double length;
    double width;
};
