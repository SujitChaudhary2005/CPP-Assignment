//Program to swap two numbers without using temp veriable
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    x = x + y;
    y = x - y;
    x = x - y;
}

int main() {
    int a = 10, b = 5;
    swap(a, b);
    cout << a << " " << b;
    return 0;
}
