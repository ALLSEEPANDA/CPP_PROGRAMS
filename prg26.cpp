#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String(const char* s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    String(const String& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    void display() const {
        cout << str << endl;
    }

private:
    char* str;
    int length;
};

int main() {
    String s1("Hello, World!");
    cout << "String s1: ";
    s1.display();

    String s2 = s1;
    cout << "Copied String s2: ";
    s2.display();

    return 0;
}