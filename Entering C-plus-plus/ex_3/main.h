#include <iostream>
using namespace std;

int main() {
	int C = 16;
	int pi = 3.14;
	int double_pi = 2 * pi;
	double R = static_cast<double>(C) / double_pi;
	int double_R = 2 * R;
	double S = pi * double_R;
	cout << S << endl;

}