#include <bits/stdc++.h>

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box() {
        length = 1.0;
        width = 1.0;
        height = 1.0;
        std::cout << "Default Constructor called: Box created with dimensions (1.0, 1.0, 1.0)" << std::endl;
    }

    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        std::cout << "Parameterized Constructor called: Box created with dimensions (" 
                  << length << ", " << width << ", " << height << ")" << std::endl;
    }
    Box(const Box &b) {
        length = b.length;
        width = b.width;
        height = b.height;
        std::cout << "Copy Constructor called: Box copied with dimensions (" 
                  << length << ", " << width << ", " << height << ")" << std::endl;
    }

    double volume() {
        return length * width * height;
    }
};

int main() {
    Box box1;                 
    Box box2(3.5, 2.5, 4.0);  
    Box box3 = box2; 

    std::cout << std::endl;
    std::cout << "Volume of box1: " << box1.volume() << std::endl;
    std::cout << "Volume of box2: " << box2.volume() << std::endl; 
    std::cout << "Volume of box3: " << box3.volume() << std::endl;

    return 0;
}