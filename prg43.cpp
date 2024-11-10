#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    void setStudentDetails(string n, int r) {
        name = n;
        rollNo = r;
    }
};

class Test : virtual public Student {
protected:
    int testScore;
public:
    void setTestScore(int score) {
        testScore = score;
    }
};

class Sports : virtual public Student {
protected:
    int sportsScore;
public:
    void setSportsScore(int score) {
        sportsScore = score;
    }
};

class Performance : public Test, public Sports {
public:
    void displayPerformance() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Test Score: " << testScore << endl;
        cout << "Sports Score: " << sportsScore << endl;
        cout << "Total Score: " << (testScore + sportsScore) << endl;
    }
};

int main() {
    Performance p;
    p.setStudentDetails("John Doe", 101);
    p.setTestScore(85);
    p.setSportsScore(90);
    p.displayPerformance();
    return 0;
}