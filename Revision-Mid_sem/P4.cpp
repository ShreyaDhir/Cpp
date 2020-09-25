//Destructors
#include<iostream>
#include<string>
using namespace std;

class Name{
public:
  int id;
  ~Name()
  {
    cout<<"Destructor called for: "<<id<<endl;
  }
};

int main()
{
  Name obj1;
  obj1.id=7;
  int i{};
  while(i<5)
  {
    Name obj2;
    obj2.id=i;
    i++;a
  }
  return 0;
}
