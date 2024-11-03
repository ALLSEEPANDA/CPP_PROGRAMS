#include <bits/stdc++.h>

class Animal {
public:
    void eat() {
        std::cout << "This animal eats food." << std::endl;
    }
    void sleep() {
        std::cout << "This animal sleeps." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "The dog barks." << std::endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        std::cout << "The cat meows." << std::endl;
    }
};

int main() {
    Dog myDog; 
    Cat myCat; 
    myDog.eat();    
    myDog.sleep();
    myDog.bark();

    std::cout << std::endl;
    myCat.eat();  
    myCat.sleep();
    myCat.meow();

    return 0;
}
