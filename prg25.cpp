#include <iostream>
using namespace std;

class Media {
public:
    virtual void displayInfo() {
        cout << "This is a generic media item." << endl;
    }
};

class Book : public Media {
public:
    void displayInfo() override {
        cout << "This is a Book." << endl;
    }
};

class Video : public Media {
public:
    void displayInfo() override {
        cout << "This is a Video." << endl;
    }
};

int main() {
    Media* media1 = new Book();
    Media* media2 = new Video();

    media1->displayInfo();  // Output: This is a Book.
    media2->displayInfo();  // Output: This is a Video.

    delete media1;
    delete media2;

    return 0;
}