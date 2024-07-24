//Program to calculate the average of all elements present in array
#include <iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    double average = static_cast<double>(sum)/n;

    cout<<"The average of the elements is: "<<average<<endl;

    return 0;
}