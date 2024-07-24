//Program to check if two arrays are equal or not
#include <iostream>
using namespace std;

bool areArraysEqual(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int size = 5;
    int first[size];
    int second[size];

    cout << "Enter the elements of the first array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> first[i];
    }

    cout << "Enter the elements of the second array: " << endl;
    for (int j = 0; j < size; j++) {
        cout << "Element " << j + 1 << ": ";
        cin >> second[j];
    }

    if (areArraysEqual(first, second, size)) {
        cout << "The arrays are equal." << endl;
    } else {
        cout << "The arrays are not equal." << endl;
    }

    return 0;
}
