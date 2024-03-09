#include <iostream>

using namespace std;

class AreaCalculator
{
public:
    static double triangleArea(double base, double height) {
        return 0.5 * base * height;
    }

    static double rectangleArea(double width, double height) {
        return width * height;
    }

    static double squareArea(double side) {
        return side * side;
    }

    static double rhombusArea(double diagonal1, double diagonal2) {
        return 0.5 * diagonal1 * diagonal2;
    }

    static int getCount() {
        return count;
    }
private:
    static int count;
};

int AreaCalculator::count = 0;

int main() {
    AreaCalculator calc;
    cout << "Triangle Area: " << calc.triangleArea(5.0, 3.0) << endl;
    cout << "Rectangle Area: " << calc.rectangleArea(4.0, 6.0) << endl;
    cout << "Square Area: " << calc.squareArea(4.0) << endl;
    cout << "Rhombus Area: " << calc.rhombusArea(6.0, 8.0) << endl;

    cout << "Count of area calculations: " << calc.getCount() << endl;

}