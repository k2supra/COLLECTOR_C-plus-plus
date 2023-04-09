#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double l;
	double w;
	cout << "Measuring a size of a parallelepiped. \nEnter a data: \n   Map scale (number of kilometers in one centimeter): "; cin >> l;
	cout << "   The distance between the points that represent settlements(cm): "; cin >> w;
	double s;
	s = (double)l * w ;
	cout << "Size (V) = " << s << "cube cm";

};
