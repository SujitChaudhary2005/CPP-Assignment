//Program to implement constructor and destructor
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car(string b, int y) {
        brand = b;
        year = y;
        cout << "Car object created for brand: " << brand << ", year: " << year << endl;
    }

    ~Car() {
        cout << "Car object destroyed for brand: " << brand << endl;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1("Toyota", 2020);
    car1.display();
    return 0;
}