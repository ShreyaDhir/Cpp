//Local classes
#include<iostream>
using namespace std;

int fun(){
  class Test{ //local class
  public:
    //method defined inside the class
    void method()
    {
      cout<<"Test called"<<endl;
    }
  };

/*The following program will give error as the function was not declared inside
the class */

  // void method();
  // void Test::method()
  // {
  //   cout<<"Test called"<<endl;
  // }

  Test t;
  t.method();
}

int main()
{
  fun();
  return 0;
}
