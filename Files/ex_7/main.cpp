#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream read_file("file_read.txt");

	(!read_file.is_open()) ? cout << "\t\t\t\t\t\tERROR" << endl : cout << "\t\t\t\t\t\tSUCCESS" << endl;

	string line;
	while (getline(read_file, line))
	{
		cout << line << endl;
	}

	read_file.close();
}