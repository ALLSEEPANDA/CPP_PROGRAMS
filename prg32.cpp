#include <iostream>
#include <string>

class Engine {
public:
    Engine(int horsepower) : horsepower(horsepower) {}
    int getHorsepower() const { return horsepower; }
private:
    int horsepower;
};

class Car {
public:
    Car(const std::string& model, int horsepower) : model(model), engine(horsepower) {}
    void display() const {
        std::cout << "Car Model: " << model << std::endl;
        std::cout << "Engine Horsepower: " << engine.getHorsepower() << std::endl;
    }
private:
    std::string model;
    Engine engine;
};

int main() {
    Car myCar("Toyota Camry", 200);
    myCar.display();
    return 0;
}