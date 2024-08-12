//Progarm to implement to show scope of variables
#include <iostream>
using namespace std;

int globalVar = 10;

void showScopes() {
    int localVar = 20;
    
    static int staticVar = 30;

    cout << "Inside showScopes function:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
    cout << "Static variable: " << staticVar << endl;

    localVar++;
    staticVar++;

    cout << "Modified local variable: " << localVar << endl;
    cout << "Modified static variable: " << staticVar << endl;
}

int main() {
    cout << "Inside main function:" << endl;
    cout << "Global variable: " << globalVar << endl;

    showScopes();
    
    cout << "After calling showScopes function:" << endl;
    cout << "Global variable: " << globalVar << endl;
    showScopes();

    return 0;
}
