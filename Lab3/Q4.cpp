//Program to implement function overloading
#include<iostream>
using namespace std;

int square(int x) {
    return x * x;
}

double square(double x) {
    return x * x;
}

int square(int x, int y) {
    return (x + y) * (x + y);
}

int main() {
    int intResult = square(5);
    double doubleResult = square(5.5);
    int addResult = square(3, 4);
    
    cout << "Square of 5: " << intResult << endl;
    cout << "Square of 5.5: " << doubleResult << endl;
    cout << "Square of (3 + 4): " << addResult << endl;

    return 0;
}
