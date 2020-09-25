//Inheritance ans friend ship
#include<iostream>
using namespace std;

// this program will show erro as friendship cannot be inherited

class A{
  private:
    int a;
  public:
     A () { a=0; }
    friend void show();
};

class B: public A{
  public:
    B() : y(0){} //B is sub class and y is new super class
  private:
    int y;
};

void show()
{
  B b;
  cout<<"A::x"<<b.a<<endl;
  cout<<"B::y"<<b.y<<endl;
}

int main()
{
  show();
  return 0;
}
