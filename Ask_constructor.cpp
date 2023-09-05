#include<bits/stdc++.h>
using namespace std;
class constructor{
  public:
    int age;
    string name;
    string section;
  public:
    constructor(int a,string n,string s){
      age=a;
      name=n;
      section=s;
    }
    void Display(){
      cout<<age<<" "<<name<<" "<<section<<endl;
    }
};
int main(){
  constructor Vishu(18,"Vishu","A");
  Vishu.age=17;
  Vishu.name="Vishwesh";
  Vishu.section="B";
  Vishu.Display();
}