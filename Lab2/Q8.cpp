//program to print a simple full pyramid pattern
/*
eg : n=5
       *
      * *
     * * *
    * * * *
   * * * * *
*/
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
