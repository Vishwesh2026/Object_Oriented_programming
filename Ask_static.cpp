#include<bits/stdc++.h>
using namespace std;
class Myname{
  public://static has the single reference for all 
    static int count;
    int data=1;
    void Display(){
      cout<<"count = "<< count<<", data ="<<data<<endl;
    }
    static void get(){
      cout<<"count = "<< count<<" "<<endl;//in static methods we should use only static variables
      }
};
int Myname::count=0;//static can be called with the help of class

int main(){
  Myname vishu;
  vishu.Display();
  vishu.get();
}