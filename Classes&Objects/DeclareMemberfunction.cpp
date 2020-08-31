// C++ program to demonstrate function
// declaration outside class

#include<iostream>
using namespace std;

class Geeks{
public:
  string geekname;
  int id;

  //printfname not defined inside class function
  void printName();

  void getId()
  {
    cout<<"Geej ID is "<<id<<endl;
  }
};

void Geeks::printName()
{
  cout<<"Geekname is "<<geekname<<endl;
}

int main(){
  Geeks obj1;

  obj1.geekname="Shreya";
  obj1.id=1;

  obj1.printName();
  obj1.getId();


return 0;

}
