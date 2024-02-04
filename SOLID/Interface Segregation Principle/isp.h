#include <iostream>

using namespace std;

class Car
{
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
    virtual void stop() = 0;
};


class Bicycle
{
public:
    virtual void pedal() = 0;
    virtual void ringBell() = 0;
};


class Boat
{
public:
    virtual void startEngine() = 0;
    virtual void sail() = 0;
    virtual void dock() = 0;
};


class SportsCar : public Car
{
public:
    void startEngine() override
    {
        cout << "Sports car engine started." << endl;
    }

    void drive() override
    {
        cout << "Sports car is driving." << endl;
    }

    void stop() override
    {
        cout << "Sports car stopped." << endl;
    }
};


class MountainBike : public Bicycle
{
public:
    void pedal() override
    {
        cout << "Mountain bike is pedaling." << endl;
    }

    void ringBell() override
    {
        cout << "Ring, ring!" << endl;
    }
};


class Sailboat : public Boat
{
public:
    void startEngine() override
    {
        cout << "Sailboat engine started." << endl;
    }

    void sail() override
    {
        cout << "Sailboat is sailing." << endl;
    }

    void dock() override
    {
        cout << "Sailboat docked." << endl;
    }
};
