#include "ocp.h"

int main()
{
    Circle circle(3.0);
    Rectangle rectangle(4.0, 3.0);

    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;

    return 0;
}
