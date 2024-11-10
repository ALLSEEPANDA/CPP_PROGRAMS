#include <bits/stdc++.h>

class Time {
private:
    int hours;  
    int minutes; 
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        setTime(h, m, s);
    }
    void setTime(int h, int m, int s) {
        if (h < 0 || h > 23) {
            std::cerr << "Invalid hours. Setting to 0." << std::endl;
            hours = 0;
        } else {
            hours = h;
        }

        if (m < 0 || m > 59) {
            std::cerr << "Invalid minutes. Setting to 0." << std::endl;
            minutes = 0;
        } else {
            minutes = m;
        }

        if (s < 0 || s > 59) {
            std::cerr << "Invalid seconds. Setting to 0." << std::endl;
            seconds = 0;
        } else {
            seconds = s;
        }
    }
    void display() const {
        std::cout << std::setfill('0') << std::setw(2) << hours << ":"
                  << std::setfill('0') << std::setw(2) << minutes << ":"
                  << std::setfill('0') << std::setw(2) << seconds << std::endl;
    }
    Time operator+(const Time& other) const {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes + result.seconds / 60; 
        result.hours = hours + other.hours + result.minutes / 60; 

        result.seconds %= 60;
        result.minutes %= 60;
        result.hours %= 24;

        return result;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    std::cout << "Enter first time (HH MM SS): ";
    std::cin >> h1 >> m1 >> s1;
    Time time1(h1, m1, s1);

    std::cout << "Enter second time (HH MM SS): ";
    std::cin >> h2 >> m2 >> s2;
    Time time2(h2, m2, s2);

    std::cout << "First Time: ";
    time1.display();
    std::cout << "Second Time: ";
    time2.display();

    Time timeSum = time1 + time2;

    std::cout << "Sum of Times: ";
    timeSum.display();

    return 0;
}