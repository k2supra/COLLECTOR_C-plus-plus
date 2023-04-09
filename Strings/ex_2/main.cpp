#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str = "Elon Musk is a business magnate, inventor, and entrepreneur who has made a significant impact in the fields of space exploration, electric cars, and renewable energy. He was born in Pretoria, South Africa, in 1971 and later moved to the United States to pursue his entrepreneurial dreams.";
    replace(str.begin(), str.end(), ' ', '\t');
    cout << str << endl;
    return 0;
}