#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Team {
    string name;
    int wins;
    int losses;
};

int main() {

    Team teams[5] = {
        {"Team A", 52, 1},
        {"Team B", 34, 41},
        {"Team C", 25, 18},
        {"Team D", 8, 13},
        {"Team E", 45, 16}
    };

    ofstream write("teams.txt");
    for (int i = 0; i < 5; i++) {
        write << teams[i].name << "," << teams[i].wins << "," << teams[i].losses << endl;
    }
    write.close();

    ifstream read("teams.txt");
    string line;
    while (getline(read, line)) {
        string name = line.substr(0, line.find(","));
        line.erase(0, line.find(",") + 1);
        int wins = stoi(line.substr(0, line.find(",")));
        int losses = stoi(line.substr(line.find(",") + 1));

        double winPer = (double)wins / (wins + losses);

        if (winPer > 0.5) {
            cout << name << " has " << winPer * 100 << "%" << endl;
        }
    }
    read.close();

    return 0;
}
