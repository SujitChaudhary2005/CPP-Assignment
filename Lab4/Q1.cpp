//Program to count the number of function calls using static data members
#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    void callFunction() {
        count++;
        cout << "Function called " << count << " times." << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter obj1, obj2;

    obj1.callFunction();
    obj2.callFunction();
    obj1.callFunction();
    obj2.callFunction();
    obj1.callFunction();

    return 0;
}