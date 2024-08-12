//Program to implement default arguments in function
#include <iostream>
using namespace std;

void displayInfo(string name, int age = 18, string city = "Unknown") {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
}

int main() {

    displayInfo("Sujit", 25, "Kathmandu");
    displayInfo("Saurav");
    displayInfo("Sam", 32);

    return 0;
}