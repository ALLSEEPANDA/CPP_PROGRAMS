#include <iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    Distance(float m = 0) : meters(m) {}

    float getMeters() const {
        return meters;
    }

    float getCentimeters() const {
        return meters * 100;
    }

    Distance operator+(const Distance &d) const {
        return Distance(this->meters + d.meters);
    }

    Distance& operator=(float cm) {
        meters = cm / 100.0;
        return *this;
    }

    friend ostream& operator<<(ostream &out, const Distance &d) {
        out << d.getMeters() << " meters (" << d.getCentimeters() << " centimeters)";
        return out;
    }
};

int main() {
    Distance d1(5);
    Distance d2;

    cout << "Distance d1: " << d1 << endl;

    d2 = 250; 
    cout << "Distance d2 (after converting 250 cm): " << d2 << endl;

    Distance d3 = d1 + d2;
    cout << "Total Distance : " << d3 << endl;

    return 0;
}