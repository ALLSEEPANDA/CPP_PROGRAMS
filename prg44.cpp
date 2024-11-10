#include <iostream>
#include <cmath> 
using namespace std;

class Shape {
public:
    virtual double area() const = 0;

    virtual void display() const = 0;

    virtual ~Shape() {}
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }

    void display() const override {
        cout << "Triangle:\n";
        cout << "Base = " << base << ", Height = " << height << "\n";
        cout << "Area = " << area() << "\n";
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    void display() const override {
        cout << "Rectangle:\n";
        cout << "Length = " << length << ", Width = " << width << "\n";
        cout << "Area = " << area() << "\n";
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    void display() const override {
        cout << "Circle:\n";
        cout << "Radius = " << radius << "\n";
        cout << "Area = " << area() << "\n";
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Triangle(3.0, 4.0);
    shapes[1] = new Rectangle(5.0, 6.0);
    shapes[2] = new Circle(7.0);

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}