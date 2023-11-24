#include <iostream>

using namespace std;

/*class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction() : numerator(0), denominator(1) {}

    Fraction(int num, int den) : numerator(num), denominator(den) {
        if (denominator == 0) {
             cerr << "Error: Denominator cannot be zero. Setting denominator to 1." <<  endl;
            denominator = 1;
        }
    }

    Fraction operator+(const Fraction& other) const {
        int resultNum = (numerator * other.denominator) + (other.numerator * denominator);
        int resultDen = denominator * other.denominator;
        return Fraction(resultNum, resultDen);
    }

    Fraction operator-(const Fraction& other) const {
        int resultNum = (numerator * other.denominator) - (other.numerator * denominator);
        int resultDen = denominator * other.denominator;
        return Fraction(resultNum, resultDen);
    }

    Fraction operator*(const Fraction& other) const {
        int resultNum = numerator * other.numerator;
        int resultDen = denominator * other.denominator;
        return Fraction(resultNum, resultDen);
    }

    Fraction operator/(const Fraction& other) const {
        if (other.numerator == 0) {
             cerr << "Error: Cannot divide by zero. Returning the original fraction." <<  endl;
            return *this;
        }

        int resultNum = numerator * other.denominator;
        int resultDen = denominator * other.numerator;
        return Fraction(resultNum, resultDen);
    }

    void simplify() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    static int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void display() const {
         cout << numerator << "/" << denominator;
    }
};

int main() {
    Fraction fraction1(3, 4);
    Fraction fraction2(2, 5);

    Fraction sum = fraction1 + fraction2;
    Fraction difference = fraction1 - fraction2;
    Fraction product = fraction1 * fraction2;
    Fraction quotient = fraction1 / fraction2;

     cout << "Fraction 1: ";
    fraction1.display();
     cout <<  endl;

     cout << "Fraction 2: ";
    fraction2.display();
     cout <<  endl;

     cout << "Sum: ";
    sum.display();
     cout <<  endl;

     cout << "Difference: ";
    difference.display();
     cout <<  endl;

     cout << "Product: ";
    product.display();
     cout <<  endl;

     cout << "Quotient: ";
    quotient.display();
     cout <<  endl;

    return 0;
}
*/

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0.0), imaginary(0.0) {}

    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }


    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }


    Complex operator*(const Complex& other) const {
        return Complex((real * other.real) - (imaginary * other.imaginary),
            (real * other.imaginary) + (imaginary * other.real));
    }


    Complex operator/(const Complex& other) const {
        if (other.real == 0.0 && other.imaginary == 0.0) {
             cerr << "Error: Division by zero. Returning the original complex number." <<  endl;
            return *this;
        }

        double denominator = (other.real * other.real) + (other.imaginary * other.imaginary);
        double realResult = ((real * other.real) + (imaginary * other.imaginary)) / denominator;
        double imagResult = ((imaginary * other.real) - (real * other.imaginary)) / denominator;

        return Complex(realResult, imagResult);
    }

    void display() const {
         cout << real;
        if (imaginary >= 0.0) {
             cout << " + " << imaginary << "i";
        }
        else {
             cout << " - " << -imaginary << "i";
        }
    }
};

int main() {
    Complex complex1(2.0, 3.0);
    Complex complex2(1.5, -2.5);

    Complex sum = complex1 + complex2;
    Complex difference = complex1 - complex2;
    Complex product = complex1 * complex2;
    Complex quotient = complex1 / complex2;

     cout << "Complex Number 1: ";
    complex1.display();
     cout <<  endl;

     cout << "Complex Number 2: ";
    complex2.display();
     cout <<  endl;

     cout << "Sum: ";
    sum.display();
     cout <<  endl;

     cout << "Difference: ";
    difference.display();
     cout <<  endl;

     cout << "Product: ";
    product.display();
     cout <<  endl;

     cout << "Quotient: ";
    quotient.display();
     cout <<  endl;

    return 0;
}
