//Program to implement an array of objects
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    Student(const string& name = "", int age = 0) : name(name), age(age) {}

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void setDetails(const string& name, int age) {
        this->name = name;
        this->age = age;
    }

private:
    string name;
    int age;
};

int main() {
    Student students[3];

    students[0].setDetails("Alice", 20);
    students[1].setDetails("Bob", 22);
    students[2].setDetails("Charlie", 21);

    cout << "Student details:" << endl;
    for (int i = 0; i < 3; ++i) {
        students[i].display();
    }

    return 0;
}
