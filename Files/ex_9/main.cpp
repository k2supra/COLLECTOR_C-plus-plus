#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: copyfile <input_file> <output_file>" << endl;
        return 1;
    }

    ifstream input_file(argv[1]);
    if (!input_file.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    ofstream output_file(argv[2]);
    if (!output_file.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    string line;
    while (getline(input_file, line)) {
        output_file << line << endl;
    }

    input_file.close();
    output_file.close();

    cout << "File copied successfully." << endl;
    return 0;
}