#include <iostream>
#include <cstring>
using namespace std;

class String {
    char* str;
public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String operator+(const String& s) const {
        char* temp = new char[strlen(str) + strlen(s.str) + 1];
        strcpy(temp, str);
        strcat(temp, s.str);
        return String(temp);
    }

    bool operator>(const String& s) const {
        return strcmp(str, s.str) > 0;
    }

    bool operator<(const String& s) const {
        return strcmp(str, s.str) < 0;
    }

    void display() const {
        cout << str << endl;
    }

    ~String() {
        delete[] str;
    }
};

int main() {
    String s1("Hello");
    String s2("World");
    String s3 = s1 + s2;

    s3.display();
    if (s1 > s2)
        cout << "s1 is greater than s2" << endl;
    else if (s1 < s2)
        cout << "s1 is less than s2" << endl;
    else
        cout << "s1 is equal to s2" << endl;

    return 0;
}