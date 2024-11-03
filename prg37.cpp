#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    string name;
    int age;
    string address;

public:
    void getData() {
        cout << "Enter name: ";
        getline(cin, name); 
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Enter address: ";
        getline(cin, address);  
    }
    void showData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Employee emp;

    cout << "Enter employee details:" << endl;
    emp.getData();

    cout << "\nEmployee details:" << endl;
    emp.showData();

    return 0;
}