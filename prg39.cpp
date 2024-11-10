#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() {
        count++;
    }
    static void Display() {
        cout << "Count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1;
    Counter::Display();

    Counter c2;
    Counter::Display();

    Counter c3;
    Counter::Display();

    return 0;
}