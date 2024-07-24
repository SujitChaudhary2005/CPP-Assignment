//Program to search for an element in an array
#include <iostream>
using namespace std;

int main() {
    int n, element, position = -1;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> element;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "Element found at position: " << position + 1 << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
