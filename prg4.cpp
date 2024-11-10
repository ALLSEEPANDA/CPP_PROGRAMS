#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        Rectangle(int l, int w) : length(l), width(w) {}
        int calculateArea() {
            return length * width;
        }
        void displayArea() {
            int area = calculateArea(); 
            cout << "Area of the rectangle: " << area << endl;
        }
};

int main() {
    Rectangle rect(10, 5);
    rect.displayArea();

    return 0;
}