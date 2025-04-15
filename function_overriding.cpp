#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
  void getinfo(){
cout<<"parent class \n";
   }

   virtual void hello(){
    cout<<"hello from base class";
   }

};

class Student:public Parent{
    public:
    void getinfo(){
        cout<<"student class\n";
    }
    void hello(){
        cout<<"hello from derived class\n";
    }
};
int main(){
    Student s1;
    s1.hello();

}