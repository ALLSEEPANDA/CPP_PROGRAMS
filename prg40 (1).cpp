#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    static void Display() {
        cout << "Current count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter::Display();

    Counter obj1;
    Counter::Display();

    Counter obj2;
    Counter::Display();

    Counter obj3;
    Counter::Display();

    return 0;
}