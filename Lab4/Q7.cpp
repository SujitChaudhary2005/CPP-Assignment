//Program to implement constructor overloading
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;
    string color;

public:
    Car() {
        brand = "Unknown";
        year = 0;
        color = "Not specified";
        cout << "Default constructor called: " << brand << ", " << year << ", " << color << endl;
    }

    Car(string b, int y) {
        brand = b;
        year = y;
        color = "Not specified";
        cout << "Constructor with 2 parameters called: " << brand << ", " << year << ", " << color << endl;
    }

    Car(string b, int y, string c) {
        brand = b;
        year = y;
        color = c;
        cout << "Constructor with 3 parameters called: " << brand << ", " << year << ", " << color << endl;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << ", Color: " << color << endl;
    }
};

int main() {
    Car car1;
    Car car2("Toyota", 2020);
    Car car3("Honda", 2019, "Red");

    car1.display();
    car2.display();
    car3.display();

    return 0;
}