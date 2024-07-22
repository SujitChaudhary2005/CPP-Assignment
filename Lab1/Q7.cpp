//Program to check if a give year is a leap year
#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if (year%4==0)
    {
        cout<<"It is leap year";
    }
    else{
        cout<<"It is not leap year";
    }
    return 0;
}