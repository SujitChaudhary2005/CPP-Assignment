//Program to implement an inline function
#include<iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    cout << "Square of " << num << " is " << square(num) << endl;
    return 0;
}
