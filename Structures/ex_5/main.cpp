#include <iostream>

using namespace std;

struct Pentagon {
    float w, h, p;
    Pentagon()
    {
        w = 0;
        h = 0;
        p = 0;
    }
    Pentagon(float w, float h, float p)
    {
        this->w = w;
        this->h = h;
        this->p = p;
    }
    void about()
    {
        cout << "W:  \t" << w << endl;
        cout << "H:  \t" << h << endl;
        cout << "P:  \t" << p << endl;
        cout << endl;
    }

    void print_pentagon(int pos_y)
    {
        for (size_t i = 0; i < w; i++)
        {
            for (size_t k = 0; k < pos_y; k++)
            {
                cout << "\t";
            }
            for (size_t i = 0; i < h; i++)
            {
                cout << "*" << "\t";
            }
            cout << "\n\n" << endl;
        }
    }
    
};


int main()
{
    cout << "Enter x position -> ";
    int pos_x;
    cin >> pos_x;
    cout << "Enter y position -> ";
    int pos_y;
    cin >> pos_y;


    Pentagon* pentagon_1 = new Pentagon();
    int height;
    cout << "Enter height -> ";
    cin >> height;
    int lenght;
    cout << "Enter lenght -> ";
    cin >> lenght;
    Pentagon* pentagon_2 = new Pentagon(height, lenght, 27);
    uint32_t size = 2;
    Pentagon** pentagons = new Pentagon * [size] {
        new Pentagon(),
            new Pentagon(height, lenght, 27)
    };
    for (size_t i = 0; i < size; i++)
    {
        pentagons[i]->about();
    }
    cout << "\n>---------------------------------------------------------------------<\n\n\n";
    for (size_t i = 0; i < pos_x; i++)
    {
        cout << "\n";
    }
    for (size_t i = 0; i < size; i++)
    {
        pentagons[i]->print_pentagon(pos_y);
    }
    delete[] pentagons;
    return 0;
}