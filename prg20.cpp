#include <bits/stdc++.h>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
    std::string add(const std::string& a, const std::string& b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    std::cout << "Sum of 3 and 5: " << calc.add(3, 5) << std::endl;          
    std::cout << "Sum of 3, 5 and 10: " << calc.add(3, 5, 10) << std::endl; 
    std::cout << "Sum of 3.5 and 2.5: " << calc.add(3.5, 2.5) << std::endl; 
    std::cout << "Concatenation of 'Hello' and ' World': " << calc.add(std::string("Hello"), std::string(" World")) << std::endl; 

    return 0;
}