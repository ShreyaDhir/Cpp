//Accessing data members through objetcs
//Level: Easy

#include<iostream>
#include<string>

using namespace std;

class Name{
public:
  //data member
   string name;
  void display()
  {
    cout<<"Name is: "<<name<<endl;
  }
};

int main()
{
  Name n;
  n.name="Shreya";
  n.display();
  return 0;
}
