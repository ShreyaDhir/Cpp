//Accessing static member ‘a’ with explicit definition
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
  B b1, b2, b3;
  // 3 times B's constructor will be called
  A a = b1.getA();
  // A is only called once ; Reason is that the static members are shared
  //among all the objects. That is why they are also known as class members
  //or class fields

  return 0;
}
