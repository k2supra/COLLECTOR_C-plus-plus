#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    ifstream file("file.txt");

    if (!file.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int max_num = INT_MIN;
    string line;

    while (getline(file, line)) {
        istringstream iss(line);
        int num;
        while (iss >> num)
        {
            if (num > max_num)
            {
                max_num = num;
            }
        }
    }

    cout << "The largest number in the file is: " << max_num << endl;

    file.close();
    return 0;
}