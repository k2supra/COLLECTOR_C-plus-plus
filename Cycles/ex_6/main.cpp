#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n > 0 && (n % 10 == 3 || n % 10 == 6))
        n /= 10;
    int without36 = n % 10;
    int i = 10;
    while (n > 0) {
        n /= 10;
        if (n % 10 != 3 && n % 10 != 6) {
            without36 += (n % 10) * i;
            i *= 10;
        }
    }

    cout << without36 << endl;
}