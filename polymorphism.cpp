#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
Student(){
cout<<"non para constructer";
}

Student(string name){
    this->name=name;
    cout<<"para constructor";

}

};
int main(){
    Student s1("AGS");
}