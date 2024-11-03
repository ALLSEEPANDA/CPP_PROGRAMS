#include <bits/stdc++.h>

using namespace std;
double area(double side) {
    return side * side;
}
double area(double length, double width) {
    return length * width;
}
double area(int radius) {
    return M_PI * radius * radius;
}
double area(double base, double height, bool isTriangle) {
    if (isTriangle) {
        return 0.5 * base * height;
    }
    return -1;
}

int main() {
    cout << "Area of square with side 5: " << area(5.0) << endl;
    cout << "Area of rectangle with length 4 and width 6: " << area(4.0, 6.0) << endl;
    cout << "Area of circle with radius 3: " << area(3) << endl;
    cout << "Area of triangle with base 4 and height 5: " << area(4.0, 5.0, true) << endl;
    return 0;
}
