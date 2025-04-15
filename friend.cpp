#include <bits/stdc++.h>
using namespace std;
class Distance{
    public:

int meters;

 Distance(){
    meters=0;
}

void getinfo(){
    cout<<meters<<endl;
}

//friend function declaration
friend void addvalue(Distance &d);

};
//defining friend function 
void addvalue(Distance &d){
    d.meters=d.meters+5;
}
 int main(){
Distance d1;//initially meters value=0
d1.getinfo();
// friend function call
addvalue(d1);
d1.getinfo();//after friend function called

 }
 