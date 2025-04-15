#include<bits/stdc++.h>
using namespace  std;

class Teacher{
    //access modifier
    private:
    double salary;

    public: 
    //constructor
    //non parameterised
    Teacher(){
       dept = "computer science";
    }
//parameterised
    Teacher(string name, string dept, string subject,double salary){
      this-> name = name; // left => prop wala , right => object prop
       this->dept = dept;
      this-> subject = subject;
      this-> salary = salary;
     }

     // copy constructor
     Teacher(Teacher &orjobj){
        cout<<"i am copy constructor";  
        this-> name = orjobj.name;
        this-> subject=orjobj.subject;
        this-> salary = orjobj.salary;

     }


    //properties
        string name;
        string dept;
        string subject;
    //method  //member functions
    string changedept(string newdept){
        dept=newdept;
        return dept;
    }    
void getinfo(){
cout<<name;
cout<<subject;
}
};

int main(){
    //input of all details using a constructor
    Teacher t1("ash","cse","gs",255);
    // t1.getinfo();

    Teacher t2(t1);
    t2.getinfo();// copy constructor 



}
    