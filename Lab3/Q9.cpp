//Program to implement nesting of member functions
#include <iostream>
using namespace std;

class Calculator {
public:
    
    void performOperations(int a, int b) {
        int sum = add(a, b);
        int product = multiply(a, b);
        cout << "Sum: " << sum << endl;
        cout << "Product: " << product << endl;
    }

private:
    int add(int x, int y) const {
        return x + y;
    }

    int multiply(int x, int y) const {
        return x * y;
    }
};

int main() {
    Calculator calc;
    calc.performOperations(5, 3); 
    return 0;
}
