#include<iostream>
#include<string>
using namespace std;

class Name{
public:
  string name;
  int id;

  void getname();
  //Function defined inside the class
  void display()
  {
    cout<<"Id: "<<id<<endl;
  }
};
//Function defined outside the class
void Name::getname()
{
  cout<<"Name is: "<<name<<endl;
}

int main()
{
  Name obj;

  obj.name="Shreya";
  obj.id=1;

  obj.getname();
  obj.display();
  return 0;
}
