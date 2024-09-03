//Program to implement this pointer
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b) : length(l), breadth(b) {}

    void display() {
        cout << "Length: " << this->length << ", Breadth: " << this->breadth << endl;
    }

    void setLength(int l) {
        this->length = l;
    }

    void setBreadth(int b) {
        this->breadth = b;
    }
};