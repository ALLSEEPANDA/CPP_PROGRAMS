#include <bits/stdc++.h>

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}
    int& getValue() {
        return value;
    }
};

int main() {
    Number num(10);

    std::cout << "Initial value: " << num.getValue() << std::endl;

    num.getValue() = 20; 

    std::cout << "Modified value: " << num.getValue() << std::endl;

    return 0;
}
