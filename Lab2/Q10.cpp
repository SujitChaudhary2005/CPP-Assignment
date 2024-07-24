//Program for binary to decimal and decimal to binary using separate functions
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        binary = binary / 10;
        decimal += lastDigit * base;
        base = base * 2;
    }

    return decimal;
}

void decimalToBinary(int decimal) {
    if (decimal == 0) {
        cout << 0;
        return;
    }

    int binary[32];
    int index = 0;

    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }

    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
}

int main() {
    int choice, number;

    cout << "Choose conversion type:\n";
    cout << "1. Binary to Decimal\n";
    cout << "2. Decimal to Binary\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter a binary number: ";
        cin >> number;
        cout << "Decimal equivalent: " << binaryToDecimal(number) << endl;
    } else if (choice == 2) {
        cout << "Enter a decimal number: ";
        cin >> number;
        cout << "Binary equivalent: ";
        decimalToBinary(number);
        cout << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}