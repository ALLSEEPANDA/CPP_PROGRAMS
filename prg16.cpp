#include <bits/stdc++.h>

class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }
    ~Base() {
        std::cout << "Base class destructor called." << std::endl;
    }
};

class Derived1 : public Base {
public:
    Derived1() {
        std::cout << "Derived1 class constructor called." << std::endl;
    }
    ~Derived1() {
        std::cout << "Derived1 class destructor called." << std::endl;
    }
};

class Derived2 : public Derived1 {
public:
    Derived2() {
        std::cout << "Derived2 class constructor called." << std::endl;
    }

    ~Derived2() {
        std::cout << "Derived2 class destructor called." << std::endl;
    }
};

int main() {
    std::cout << "Creating object of Derived2 class:" << std::endl;
    Derived2 obj; 

    std::cout << std::endl << "End of main function." << std::endl;

    return 0;
}
