#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file_read("file1.txt");
    ofstream file_write("file2.txt");

    if (!file_read) {
        cerr << "\t\t\t\t\t\tERROR" << endl;
        return 1;
    }

    if (!file_write) {
        cerr << "\t\t\t\t\t\tERROR" << endl;
        return 1;
    }

    string line;

    while (getline(file_read, line)) {
        size_t pos = line.find('//');
        while (pos != string::npos) {
            line.replace(pos, 1, "");
            pos = line.find('//', pos + 1);
        }
        size_t pos1 = line.find('/*');
        while (pos1 != string::npos) {
            line.replace(pos1, 1, "");
            pos1 = line.find('/*', pos1 + 1);
        }
        size_t pos2 = line.find('*/');
        while (pos2 != string::npos) {
            line.replace(pos2, 1, "");
            pos2 = line.find('*/', pos2 + 1);
        }
        file_write << line << endl;
    }

    cout << "\t\t\t\t\t\tSUCCESS" << endl;

    file_read.close();
    file_write.close();

    return 0;
}