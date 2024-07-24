//Program to reverse a sentence using recursion
#include<iostream>
using namespace std;
void resentence();
int main(){
    cout<<"Enter a Sentence: ";
    resentence();
    return 0;
}

void resentence(){
    char c;
    cin.get(c);
    if (c!='\n'){
        resentence();
        cout<<c;
    }
}