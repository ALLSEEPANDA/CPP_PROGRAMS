#include <bits/stdc++.h>
class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }
    
    void show() {
        std::cout << "Base class show method." << std::endl;
    }
};
class Derived1 : virtual public Base {
public:
    Derived1() {
        std::cout << "Derived1 class constructor called." << std::endl;
    }
    
    void showDerived1() {
        std::cout << "Derived1 class show method." << std::endl;
    }
};
class Derived2 : virtual public Base {
public:
    Derived2() {
        std::cout << "Derived2 class constructor called." << std::endl;
    }
    
    void showDerived2() {
        std::cout << "Derived2 class show method." << std::endl;
    }
};
class FinalDerived : public Derived1, public Derived2 {
public:
    FinalDerived() {
        std::cout << "FinalDerived class constructor called." << std::endl;
    }
};

int main() {
    std::cout << "Creating FinalDerived object:" << std::endl;
    FinalDerived obj;
    obj.show();  
    obj.showDerived1();  
    obj.showDerived2(); 

    return 0;
}
