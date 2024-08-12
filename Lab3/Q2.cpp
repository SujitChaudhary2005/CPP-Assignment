//Program to implement macros
#include<iostream>
using namespace std;
#define PI 3.1415

double AreaOfCircle(double R){
    return PI*R*R;
}

int main (){
    double r, result;

    cout<<"Enter the radius: ";
    cin>>r;
    
    result = AreaOfCircle(r);

    cout<<"The area of circle is: "<<result<<endl;
    return 0;
}