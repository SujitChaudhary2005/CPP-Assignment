//Program to find the length of the string
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100];

    cout << "Enter the string: ";
    cin.getline(str1, 100);

    int strlength = strlen(str1);

    cout << "The length of the string is " << strlength << endl;

    return 0;
}
