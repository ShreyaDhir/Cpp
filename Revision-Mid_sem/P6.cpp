//Static data memebrs in cpp
#include<iostream>
using namespace std;

class A{
public:
  A()
  {
    cout<<"A is called."<<endl;
  }
};

class B{
  static A a;
public:
  B()
  {
    cout<<"B is called."<<endl;
  }
};

// Static members are only declared in class declaration, not defined.
// They must be explicitly defined outside the class using scope resolution operator.

int main()
{
  B b; // o/p - B is called. [explaination above]
  return 0;
}
