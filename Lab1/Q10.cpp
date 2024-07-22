//Program to make a simple calculator
#include <iostream>
using namespace std;

int main() {
    char operation;
    float num1, num2;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
    switch (operation) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
            break;
    }
    
    return 0;
}
