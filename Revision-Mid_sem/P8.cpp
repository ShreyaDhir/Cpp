//Accessing static member ‘a’ without any object
#include<iostream>
using namespace std;

class A{
public:
  A()
  {
      cout<<"A is called"<<endl;
  }
};

class B{
  static A a;
public:
  B()
  {
    cout<<"B is called"<<endl;
  }
  static A getA()
  {
    return a;
  }
};

A B::a; //definiton of a
/*If the above is not defined then A constructor will not be called*/

int main()
{
  A a = B::getA();

  return 0;
}
