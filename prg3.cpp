#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
    Student s;
    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter roll number: ";
    cin >> s.rollNumber;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}