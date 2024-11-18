#include <bits/stdc++.h>
using namespace std;

inline int square(int x) {
    return x * x;
}
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1 = 5, num2 = 3;
    cout << "Square of " << num1 << " is: " << square(num1) << endl;
    cout << "Cube of " << num2 << " is: " << cube(num2) << endl;

    return 0;
}