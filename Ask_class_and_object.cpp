#include<iostream>
using namespace std;
//class and object

class Myname{
  public:
    string name;
    void Info();//function declaration
    void Display(){
      cout<<"How are you "<<name<<" ? "<<endl;
    }
};
void Myname::Info(){
      cout<<"My name is "<<Myname::name<<endl;
    } 
int main(){
  Myname N;//object creation
  N.name="Naruto";
  N.Info();
  N.Display();

  Myname *Z=&N;
  (*Z).name="Hinata";
  (*Z).Info();
  (*Z).Display();



 /*
 Myname *M= new Myname();
  M->name="Hinata";
  M->Info();
*/




/*
  Incase of pointer object:
class *object= new class();
object->memberfunction();
or
(*object).memberfunction();
 */ 

}
