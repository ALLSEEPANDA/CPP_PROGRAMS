#include <iostream>

class Complex {
public:
    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    void display() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }

private:
    double real, imag;
};

int main() {
    Complex c1(3.5, 2.0), c2(1.5, 4.5);
    
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    diff.display();

    return 0;
}