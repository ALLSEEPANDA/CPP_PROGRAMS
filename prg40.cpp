#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    Complex sum = c1 + c2;
    cout << "Sum of c1 and c2: ";
    sum.display();

    Complex difference = c1 - c2;
    cout << "Difference of c1 and c2: ";
    difference.display();

    return 0;
}