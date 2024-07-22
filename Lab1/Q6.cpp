//Program to find the largest among three numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "The first number is the greatest: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The second number is the greatest: " << b << endl;
    } else {
        cout << "The third number is the greatest: " << c << endl;
    }

    return 0;
}
