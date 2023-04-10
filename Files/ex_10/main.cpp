#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file1("file1.txt");
    if (!file1)
    {
        cout << "ERROR file1.txt" << endl;
        return 1;
    }
    ifstream file2("file2.txt");
    if (!file2)
    {
        cout << "ERROR file2.txt" << endl;
        return 1;
    }

    ofstream file3("file3.txt");
    if (!file3)
    {
        cout << "ERROR file3.txt" << endl;
        return 1;
    }

    string line1, line2;


    while (getline(file1, line1) || getline(file2, line2))
    {
        if (!line1.empty())
        {
            file3 << "file1: " << line1 << endl;
        }

        if (!line2.empty())
        {
            file3 << "file2: " << line2 << endl;
        }
    }
 


    file1.close();
    file2.close();
    file3.close();

    cout << "SUCCESS" << endl;

    return 0;
}