//Program for fibonacci numbres using recursion
#include<iostream>
using namespace std;

int fseries(int x){
    if (x==0 || x==1)
    return (x);
    else
    return (fseries(x-1)+fseries(x-2));
}
int main(){
    int a;
    cout<<"Enter the no. of terms: ";
    cin>>a;
    cout<<"fabonacci Series: ";
    for (int i=0; i<a; i++){
        cout<<"\t"<<fseries(i);
    }
    return 0;
}