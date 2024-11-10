#include <bits/stdc++.h>

class Base {
public:
    void show(int a) {
        std::cout << "Base class show with int: " << a << std::endl;
    }

    void show(double a) {
        std::cout << "Base class show with double: " << a << std::endl;
    }
};

class Derived1 : public Base {
public:
    void show(int a) {
        std::cout << "Derived1 class show with int: " << a << std::endl;
    }

    void show(std::string a) {
        std::cout << "Derived1 class show with string: " << a << std::endl;
    }
};

class Derived2 : public Derived1 {
public:
    void show() {
        Base::show(10);                 
        Derived1::show(20);       
        Derived1::show("Hello");  
    }
};

int main() {
    Derived2 obj;
    obj.show();

    return 0;
}