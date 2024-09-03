//Program to implement friend functions
#include <iostream>
using namespace std;

class B;

class A {
private:
    int a;

public:
    A(int x) : a(x) {}

    friend int sum(A, B);
};

class B {
private:
    int b;

public:
    B(int y) : b(y) {}

    friend int sum(A, B);
};

int sum(A objA, B objB) {
    return objA.a + objB.b;
}

int main() {
    A objA(5);
    B objB(10);

    cout << "Sum: " << sum(objA, objB) << endl;

    return 0;
}
