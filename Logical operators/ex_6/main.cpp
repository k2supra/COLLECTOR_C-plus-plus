#include <iostream>
using namespace std;
int main()
{
	size_t y;  cin >> y;  cout << "In " << y << " year = " << 365 + (!(y % 4) ? !(y % 100) ? !(y % 400) ? true : false : true : false) << " days.";
};

