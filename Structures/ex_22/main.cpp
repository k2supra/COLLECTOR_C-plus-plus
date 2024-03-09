#include <iostream>

using namespace std;

class Point {
public:
    Point() {
        count++;
    }

    Point(double x, double y) : Point() {
        this->x = x;
        this->y = y;
    }

    ~Point() {
        count--;
    }

    static int getCount() {
        return count;
    }

private:
    double x, y;
    static int count;
};

int Point::count = 0;


class Fraction {
public:
    Fraction() {
        count++;
    }

    Fraction(int numerator, int denominator) : Fraction() {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    ~Fraction() {
        count--;
    }

    static int getCount() {
        return count;
    }

private:
    int numerator, denominator;
    static int count;
};

int Fraction::count = 0;


class Student {
public:
    Student() {
        count++;
    }

    Student(string name, int age) : Student() {
        this->name = name;
        this->age = age;
    }

    ~Student() {
        count--;
    }

    static int getCount() {
        return count;
    }

private:
    string name;
    int age;
    static int count;
};

int Student::count = 0;

int main() {
    Point p(3.5, 2.0);
    Fraction f1;
    Fraction f2(3, 4);
    Student s1;
    Student s2("John", 20);

    cout << "Count of Points: " << Point::getCount() << endl;
    cout << "Count of Fractions: " << Fraction::getCount() << endl;
    cout << "Count of Students: " << Student::getCount() << endl;

    return 0;
}