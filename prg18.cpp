#include <bits/stdc++.h>
class Base {
public:
    void show() {
        std::cout << "Show from Base class." << std::endl;
    }

protected:
    void display() {
        std::cout << "Display from Base class." << std::endl;
    }
};
class Derived : private Base {
public:
    void callBaseFunctions() {
        show(); 
        display();
    }
};

int main() {
    Derived derivedObj;
    derivedObj.callBaseFunctions();
     return 0;
}
