#include <iostream>
using namespace std;

// Base class 1
class Person {
public:
    string name;

    Person(string n) {
        name = n;
        cout << "Person constructor called\n";
    }
};

// Base class 2
class Student {
public:
    int rollno;

    Student(int r) {
        rollno = r;
        cout << "Student constructor called\n";
    }
};

// Derived class using multiple inheritance
class GradStudent : public Person, public Student {
public:
    int regno;

    GradStudent(string n, int r, int reg) : Person(n), Student(r) {
        regno = reg;
        cout << "GradStudent constructor called\n";
    }

    void display() {
        cout << "Name: " << name << "\nRoll No: " << rollno << "\nReg No: " << regno << endl;
    }
};

int main() {
    GradStudent gs("Alice", 101, 5001);
    gs.display();

    return 0;
}
