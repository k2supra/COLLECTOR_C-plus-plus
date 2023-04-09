#include <iostream>
using namespace std;

int main() {

    cout << "Enter a number" << endl;
    int num_or, num_1, num_2, num_3, num_4, num_5, num_6;
    cin >> num_or;
    num_1 = num_or % 10;
    num_2 = num_or / 10 % 10;
    num_3 = num_or / 100 % 10;
    num_4 = num_or / 1000 % 10;
    num_5 = num_or / 10000 % 10;
    num_6 = num_or / 100000 % 10;
    size_t sum_1, sum_2;
    sum_1 = num_1 + num_2 + num_3;
    sum_2 = num_4 + num_5 + num_6;
    if (num_or <= 99999 || num_or >= 1000000)
    {
        cout << "Enter number with 6 numbers";
    }
    else
    {
        if (sum_1 == sum_2)
        {
            cout << "!!!HAPPY NEW TEAR!!!";
        }
        else
        {
            cout << "It`s not New Year =(";
        }
    }
    


    

}