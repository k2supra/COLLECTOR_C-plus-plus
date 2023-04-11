#include <iostream>
#include <fstream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    map<char, int> charCount;
    int totalCount = 0;
    ifstream file("file.txt"); // Замініть "text_file.txt" на назву свого текстового файлу

    if (!file.is_open()) {
        cout << "ERROR" << endl;
        return 1;
    }

    char ch;
    while (file >> ch) {
        charCount[ch]++;
        totalCount++;
    }

    file.close();

    if (totalCount == 0) {
        cout << "EMPTY" << endl;
        return 0;
    }

    cout << "Statistics:" << endl;
    for (const auto& pair : charCount) {
        char ch = pair.first;
        int count = pair.second;
        double percentage = static_cast<double>(count) / totalCount * 100;
        cout << "'" << ch << "': " << count << " (" << fixed << setprecision(2) << percentage << "%)" << endl;
    }

    return 0;
}