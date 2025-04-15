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
void getinfo(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<rollno<<endl;
}
};

int main(){
    student s1("asg",66,272728);
    s1.getinfo();
}
