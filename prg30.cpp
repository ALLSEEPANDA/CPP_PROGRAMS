#include <iostream>

class Vector {
public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    Vector& operator+=(const Vector& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    Vector& operator-=(const Vector& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    Vector operator()(int factor) const {
        return Vector(x * factor, y * factor);
    }

    void display() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }

private:
    int x, y;
};

int main() {
    Vector v1(3, 4);
    Vector v2(1, 2);

    v1 += v2; 
    std::cout << "After v1 += v2: ";
    v1.display();

    v1 -= v2;
    std::cout << "After v1 -= v2: ";
    v1.display();

    Vector v3 = v1(2);
    std::cout << "After scaling v1 by 2: ";
    v3.display();

    return 0;
}