#include <iostream>

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double p = 3.5, q = 7.2;
    char c1 = 'A', c2 = 'B';

    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    std::cout << "\nBefore swapping: p = " << p << ", q = " << q << std::endl;
    swapValues(p, q);
    std::cout << "After swapping: p = " << p << ", q = " << q << std::endl;

    std::cout << "\nBefore swapping: c1 = " << c1 << ", c2 = " << c2 << std::endl;
    swapValues(c1, c2);
    std::cout << "After swapping: c1 = " << c1 << ", c2 = " << c2 << std::endl;

    return 0;
}