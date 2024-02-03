#include "lsp.h"

int main()
{
	Triangle<int> tr(4, 5, 3);
	Square<float> sq(4.3536);
	Pentagon<double> pent(5.3);

	cout << "Triangle: " << tr.calculatePerimeter() << endl;
	cout << "Square: " << sq.calculatePerimeter() << endl;
	cout << "Pentagon: " << pent.calculatePerimeter() << endl;
}