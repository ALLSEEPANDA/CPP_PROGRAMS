#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    Point& operator+=(const Point& p) {
        x += p.x;
        y += p.y;
        return *this;
    }

    Point& operator-=(const Point& p) {
        x -= p.x;
        y -= p.y;
        return *this;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(1, 2);

    cout << "Initial points:\n";
    cout << "p1 = ";
    p1.display();
    cout << "p2 = ";
    p2.display();

    p1 += p2;
    cout << "\nAfter p1 += p2:\n";
    cout << "p1 = ";
    p1.display();
    cout << "p2 = ";
    p2.display();

    p1 -= p2;
    cout << "\nAfter p1 -= p2:\n";
    cout << "p1 = ";
    p1.display();
    cout << "p2 = ";
    p2.display();

    return 0;
}