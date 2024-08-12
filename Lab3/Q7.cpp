//Program to implement member functions of the class and use scope resolution operator for function definition
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(const string& name, int age);

    void displayInfo() const;
    void setAge(int age);

private:
    string name;
    int age;
};

Person::Person(const string& name, int age) : name(name), age(age) {}

void Person::displayInfo() const {
    cout << "Name: " << name << ", Age: " << age << endl;
}

void Person::setAge(int age) {
    this->age = age;
}

int main() {
    Person person("Sujit", 30);

    person.displayInfo();

    person.setAge(31);
    person.displayInfo();

    return 0;
}
