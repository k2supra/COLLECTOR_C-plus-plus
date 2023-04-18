#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    string surname;
    string name;
    int age;
    float avg;
};

int main() {

    Student students[3];

    students[0] = { "OBEME", "SUS", 20, 4.5 };
    students[1] = { "SUIIII", "AUGUS", 22, 3.8 };
    students[2] = { "ABOBA", "FREE", 19, 4.2 };

    ofstream file("students.txt");
    if (file.is_open()) {
        for (int i = 0; i < 3; i++) {
            file << students[i].surname << " " << students[i].name << " " << students[i].age << " " << students[i].avg << endl;
        }
        file.close();
    }
    else {
        cout << ".ERROR." << endl;
        return 1;
    }

    ifstream read("students.txt");
    if (read.is_open()) {
        string line;
        while (getline(read, line)) {
            cout << line << "\n " << endl;
        }
        read.close();
    }
    else {
        cout << ".ERROR." << endl;
        return 1;
    }

    return 0;
}