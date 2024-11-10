#include <bits/stdc++.h>

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass object created!" << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass object destroyed!" << std::endl;
    }
    void displayMessage() const {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {
    MyClass* myObject = new MyClass();
    myObject->displayMessage();
    delete myObject;

    return 0;
}