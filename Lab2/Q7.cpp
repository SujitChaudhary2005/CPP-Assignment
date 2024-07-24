//Program to compare two string
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter the first string: ";
    cin.getline(str1, 100);

    cout << "Enter the second string: ";
    cin.getline(str2, 100);

    if (strcmp(str1, str2) == 0){
        cout<<"The strings are same";
    }
    else{
        cout<<"The strings are not same";
    }
    return 0;
}