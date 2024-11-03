#include <bits/stdc++.h>

class Number {
private:
    int value; 

public:
    Number(int v = 0) : value(v) {}
    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
    void increment(Number& obj) {
        obj.value += 1; 
    }
    Number& getObject() {
        return *this;
    }
    void setValue(int v) {
        value = v;
    }
};

int main() {
    Number num1(5); 
    std::cout << "Before increment:" << std::endl;
    num1.display();
    num1.increment(num1); 
    std::cout << "After increment (call by reference):" << std::endl;
    num1.display();
    Number& refNum = num1.getObject();
    refNum.setValue(20);

    std::cout << "After modifying value using return by reference:" << std::endl;
    num1.display();

    return 0;
}
