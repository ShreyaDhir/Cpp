//static member function does not have "this" pinter
#include<iostream>
using namespace std;

class Test{
private:
  static A * fun()
  {
    return this; //compile error - error: 'A' does not name a type static A * fun()
  }
};

int main()
{
  getchar();
  return 0;
}

// static member functions cannot be virtual.

//static member functions cannot be overloaded.

//static member functions cannot be declared with const, volatile, or const volatile
