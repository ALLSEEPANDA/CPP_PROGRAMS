#include <bits/stdc++.h>

class Student {
private:
    std::string name;
    int rollNumber; 
    float marks;

public:
    Student(std::string n = "", int r = 0, float m = 0.0) 
        : name(n), rollNumber(r), marks(m) {}
    void inputDetails() {
        std::cout << "Enter name: ";
        std::getline(std::cin, name);
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cout << "Enter marks: ";
        std::cin >> marks;
        std::cin.ignore();
    }
    void displayDetails() const {
        std::cout << "Name: " << name 
                  << ", Roll Number: " << rollNumber 
                  << ", Marks: " << marks << std::endl;
    }
};

int main() {
    const int SIZE = 5;  
    Student students[SIZE]; 
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Enter details for student " << (i + 1) << ":\n";
        students[i].inputDetails(); 
    }

    std::cout << "\nStudent Details:\n";
    for (int i = 0; i < SIZE; ++i) {
        students[i].displayDetails();
    }
    return 0;
}
