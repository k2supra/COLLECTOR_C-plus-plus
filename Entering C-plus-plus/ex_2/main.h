using namespace std;
#include <iostream>
int main() {

	int R1 = 2;
	int R2 = 4;
	int R3 = 8;
	double R0 = static_cast<double>(1) / R1 + static_cast<double>(1) / R2 + static_cast<double>(1) / R3;
	cout << "====== " << 1 / R0;
}

