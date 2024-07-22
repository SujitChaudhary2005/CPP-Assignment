#include <iostream>
#include <cmath>

using namespace std;

float SI(float p, float t, float r) {
    return (p * t * r) / 100;
}

float CI(float p, float r, float n, float t) {
    return p * pow((1 + r / (n * 100)), n * t) - p;
}

int main() {
    float principal, time, rate, compoundsPerYear;
    
    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter time (years): ";
    cin >> time;

    cout << "Enter annual interest rate (as a percentage): ";
    cin >> rate;

    cout << "Enter number of times interest is compounded per year: ";
    cin >> compoundsPerYear;

    float simpleInterest = SI(principal, time, rate);
    cout << "Simple interest is: " << simpleInterest << endl;

    float compoundInterest = CI(principal, rate, compoundsPerYear, time);
    cout << "Compound interest is: " << compoundInterest << endl;

    return 0;
}
