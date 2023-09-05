#include<bits/stdc++.h>
using namespace std;
//constructors


class Myname{
  private:
    string name;
    int age;
    string aim;
  public:
      Myname(int num , string word, string goal ){
        age=num;
        name =word;
        aim = goal;
      }
      
      Myname(){ //default constructor
        age=30;
        name="Naruto";
        aim="I became Hokage";
      }
      void Display(){
        cout<<"Name is "<<name<<" with age "<<age<<". One day I will become "<<aim<<endl;
      }
      Myname(Myname &C){//copy constructor
        this->age=C.age;
        this->name=C.name;
        this->aim=C.aim;
      }
      };

int main(){
  Myname V(60,"Sunade","Hokage");
  Myname C(V);
  V.Display();
  C.Display();
}
    