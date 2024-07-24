//Program to print pascal's triangle
/*
eg : n=5
       1
      1 1
     1 2 1
    1 3 3 1
   1 4 6 4 1
*/
#include <iostream>
using namespace std;

void printPascalsTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        int value = 1;
        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1);
        }

        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    printPascalsTriangle(n);

    return 0;
}
