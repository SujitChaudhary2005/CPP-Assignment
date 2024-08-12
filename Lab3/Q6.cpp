//Program to implement external variables
#include <iostream>

extern int externalVar;

using namespace std;

void displayExternalVar();

int main() {
    cout << "Value of externalVar in main.cpp: " << externalVar << endl;
    displayExternalVar();

    externalVar = 200;

    cout << "Modified value of externalVar in main.cpp: " << externalVar << endl;
    displayExternalVar();

    return 0;
}
