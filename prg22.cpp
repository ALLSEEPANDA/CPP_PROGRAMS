#include <bits/stdc++.h>

class Rectangle {
private:
    int width;  
    int height; 

public:
    Rectangle(int w, int h) : width(w), height(h) {
        std::cout << "Rectangle created with width = " << width 
                  << " and height = " << height << std::endl;
    }
    int area() const {
        return width * height;
    }
};

int main() {
    Rectangle rect(5, 10);
    std::cout << "Area of the rectangle: " << rect.area() << std::endl;

    return 0;
}