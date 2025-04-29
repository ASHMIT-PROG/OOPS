#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
    int age;
    string name;
    Parent(int age,string name){
        this->name = name;
        this->age = age;
    }

};
class student: public Parent{
    public:
int rollno;
student(string name, int age, int rollno) : Parent(age, name){

    this-> rollno=rollno;
}
};
class Gradstudent:public student{
    public :
    int regno;
    Gradstudent(string name, int age, int rollno, int regno):student( name,  age,  rollno){
        this ->regno=regno;
    }
    void display() {
        cout << "Name: " << name << "\nAge: " << age
             << "\nRoll No: " << rollno << "\nReg No: " << regno << endl;
    }

};

int main(){
    Gradstudent g1("ash",66, 61526 , 63);
    g1.display();
}
