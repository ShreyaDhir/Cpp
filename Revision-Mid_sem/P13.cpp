//Local class can contain static member function but not static data member
#include<iostream>
using namespace std;

void fun()
{
  class Test
  {
    public:
      static void method()
      {
          cout<<"Loacl class method called"<<endl;
      }
//Do not call the function inside the class
  };
  Test::method();
}

int main()
{
  fun();
  return 0;
}
