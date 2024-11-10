#include <iostream>
#include <cstring>

class String {
public:
    String() : str(nullptr) {}
    
    String(const char* s) {
        if (s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        } else {
            str = nullptr;
        }
    }

    ~String() {
        delete[] str;
    }

    friend std::istream& operator>>(std::istream& in, String& s);
    friend std::ostream& operator<<(std::ostream& out, const String& s);

private:
    char* str;
};

std::istream& operator>>(std::istream& in, String& s) {
    char buffer[100];
    in >> buffer;
    s = String(buffer); 
    return in;
}

std::ostream& operator<<(std::ostream& out, const String& s) {
    if (s.str) {
        out << s.str;
    } else {
        out << "(empty string)";
    }
    return out;
}

int main() {
    String s1;
    std::cout << "Enter a string: ";
    std::cin >> s1;

    std::cout << "You entered: " << s1 << std::endl;

    return 0;
}