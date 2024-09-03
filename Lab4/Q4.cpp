//Program to implement friend class
#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    friend class Car;
};

class Car {
private:
    string brand;
    Engine engine;

public:
    Car(string b, int hp) : brand(b), engine(hp) {}

    void display() {
        cout << "Car brand: " << brand << ", Engine horsepower: " << engine.horsepower << endl;
    }
};

int main() {
    Car car1("Toyota", 300);
    car1.display();

    return 0;
}