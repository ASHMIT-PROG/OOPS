#include<bits/stdc++.h>
using namespace  std;

class Teacher{
    //access modifier
    private:
    double salary;
    public: 
    //properties
        string name;
        string dept;
        string subject;
    //method  //member functions
    string changedept(string newdept){
        dept=newdept;
        return dept;
    }    
// method for salary (private fnc)
//setter
    void setsalary(double s){
        salary = s;
    }
//getter
    double getsalary(){
        return salary;
    }
};

int main(){
    Teacher t1;
    t1.name = "ash";
    cout<<t1.name<<endl;
    t1.setsalary(200);
    cout<<t1.getsalary()<<endl;
  cout<<t1.changedept("smg")<<endl;


}
 