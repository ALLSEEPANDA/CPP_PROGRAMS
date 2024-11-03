#include <bits/stdc++.h>
using namespace std;

class Second; 

class First {
    int value1;

public:
    void setValue1(int val) {
        value1 = val;
    }

    int getValue1() const {
        return value1;
    }

    friend class Post;
};

class Second {
    int value2;

public:
    void setValue2(int val) {
        value2 = val;
    }

    int getValue2() const {
        return value2;
    }

    void displayValues(const First& f) const {
        cout << "Value from First class: " << f.getValue1() << endl;
        cout << "Value from Second class: " << value2 << endl;
    }

    friend class Post;
};

class Post {
public:
    void setValues(First& f, Second& s, int val1, int val2) {
        f.setValue1(val1);
        s.setValue2(val2);
    }
};

int main() {
    First f;
    Second s;
    Post p;

    int val1, val2;
    cout << "Enter value for First class: ";
    cin >> val1;
    cout << "Enter value for Second class: ";
    cin >> val2;

    p.setValues(f, s, val1, val2);
    s.displayValues(f);

    return 0;
}