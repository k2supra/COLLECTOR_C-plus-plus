#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;
    int part1 = number % 10;
    int part2 = number % 100 / 10;
    int part3 = number % 1000 / 100;
    int part4 = number / 1000;
    
    cout << /*part4 <<*/ part3 << part4 << part1 << part2; //<< part3;


}