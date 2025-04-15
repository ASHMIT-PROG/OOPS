#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    // Properties
    string name;
    int age;

    // Default constructor
    Person() {
        name = "";
        age = 0;
    }

    // // Parameterized constructor
    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }
};

class Student : public Person {
public:
    int rollno;
    void getinfo(){
        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
    }


};

int main() {
  
Student s1;
s1.name = "ash";
s1.age = 19;
s1.rollno = 277382;
s1.getinfo();
    return 0;
}