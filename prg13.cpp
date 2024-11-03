#include <bits/stdc++.h>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    void display() const {
        if (imag >= 0)
            std::cout << real << " + " << imag << "i" << std::endl;
        else
            std::cout << real << " - " << -imag << "i" << std::endl;
    }
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main() {
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);

    std::cout << "Complex Number 1: ";
    c1.display();
    
    std::cout << "Complex Number 2: ";
    c2.display();

    Complex sum = c1 + c2;
    std::cout << "Sum: ";
    sum.display();

    Complex diff = c1 - c2;
    std::cout << "Difference: ";
    diff.display();

    return 0;
}
