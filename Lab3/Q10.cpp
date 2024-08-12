//Program to implement objects as function arguments
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(const string& name = "", int age = 0) : name(name), age(age) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    int getAge() const {
        return age;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

private:
    string name;
    int age;
};

void printPerson(Person p) {
    p.display();
}

void increaseAge(Person& p) {
    p.setAge(p.getAge() + 1);
}

void setName(Person* p, const string& newName) {
    p->setName(newName);
}

int main() {
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    cout << "Person 1 details:" << endl;
    printPerson(person1);

    increaseAge(person2);
    cout << "Person 2 details after increasing age:" << endl;
    printPerson(person2);

    setName(&person1, "Alice Smith");
    cout << "Person 1 details after name change:" << endl;
    printPerson(person1);

    return 0;
}
