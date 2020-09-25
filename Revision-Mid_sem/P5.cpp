//Protected access modifiers
#include<iostream>
#include<string>
using namespace std;

//base class
class Parent{
protected:
  int prot_id{};
};

// derived base class or sub class
class Child: public Parent{
public:
  void set_id(int id)
  {
     prot_id = id;
  }

  void display()
  {
    cout<<"Id: "<<prot_id<<endl;
  }
};

int main()
{
  Child obj1;
  obj1.set_id(7);
  obj1.display();

  return 0;
}
