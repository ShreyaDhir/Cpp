//Constructors
#include<iostream>
#include<string>
using namespace std;

class Name{
public:
  int id;
  Name()
  {
    cout<<"Default const called"<<endl;
    id=-1;
  }
  Name(int x)
  {
    cout<<"Parameterised constuctor called"<<endl;
    id=x;
  }
};

int main()
{
  Name obj1;
  cout<<"Geek id: "<<obj1.id<<endl;

  Name obj2(9);
  cout<<"Geek id: "<<obj2.id<<endl;

  return 0;
}
