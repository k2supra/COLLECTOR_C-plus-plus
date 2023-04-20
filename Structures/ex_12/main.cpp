#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct City {
    string name;
    string country;
    int population;
    double area;
};

int main() {

    City cities[5] = {
        {"Kyiv", "Ukraine", 2952000, 839},
        {"New York", "USA", 8538000, 468.9},
        {"Tokyo", "Japan", 13929286, 2191.66},
        {"Zhmerinka", "Ukraine", 100000, 220.66},
        {"Kryvyi Rig", "Ukraine", 236842, 350.46}
    };

    ofstream file("cities.txt");
    for (int i = 0; i < 5; i++) {
        file << cities[i].name << "," << cities[i].country << "," << cities[i].population << "," << cities[i].area << endl;
    }
    file.close();

    ifstream inFile("cities.txt");
    string line;
    while (getline(inFile, line)) {

        string name = line.substr(0, line.find(","));
        line.erase(0, line.find(",") + 1);
        string country = line.substr(0, line.find(","));
        line.erase(0, line.find(",") + 1);
        int population = stoi(line.substr(0, line.find(",")));
        double area = stod(line.substr(line.find(",") + 1));

        if (population > 1000000) {
            cout << name << " is a city in " << country << " with a population of " << population << endl;
        }
    }
    inFile.close();

    return 0;
}
