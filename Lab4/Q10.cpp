/*program to implement 
a. Basic type to user defined type 
b. User defined type to basic type 
c. user defined type to defined type*/
#include <iostream>
using namespace std;

class Celsius {
private:
    double temperature;

public:
    Celsius(double temp = 0.0) : temperature(temp) {}

    operator double() const {
        return temperature;
    }

    static Celsius fromFahrenheit(double fahrenheit) {
        return Celsius((fahrenheit - 32.0) * 5.0 / 9.0);
    }

    void display() const {
        cout << "Temperature: " << temperature << "°C" << endl;
    }
};

class Fahrenheit {
private:
    double temperature;

public:
    Fahrenheit(double temp = 0.0) : temperature(temp) {}

    operator Celsius() const {
        return Celsius::fromFahrenheit(temperature);
    }

    void display() const {
        cout << "Temperature: " << temperature << "°F" << endl;
    }
};

int main() {
    int tempF = 100;
    Fahrenheit fahrenheitTemp(tempF);

    Celsius celsiusTemp = fahrenheitTemp;
    double tempCelsius = static_cast<double>(celsiusTemp);

    cout << "Fahrenheit Temperature: ";
    fahrenheitTemp.display();
    cout << "Converted to Celsius (double): " << tempCelsius << "°C" << endl;
    cout << "Converted to Celsius (Celsius object): ";
    celsiusTemp.display();

    return 0;
}