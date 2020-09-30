#include<iostream>
using namespace std;

class B;

class A{
  //data member
  int a;
public:
  void set(int x){
    a=x;
  }
  void display()
  {
    cout<<"The value of a is "<<a<<endl;
  }
 friend void swap(A &, B &);
};

class B{
  //data member
   int b;
    public:
   void set(int y){
     b=y;
   }
   void display()
   {
     cout<<"The value of b is "<<b<<endl;
   }
  friend void swap(A &, B &);
};

void swap(A &c, B &d){
  int temp;
  temp=c.a;
  c.a=d.b;
  d.b=temp;
}

int main()
{
  // Declaring Objects
  A n;
  B m;


   n.set(30);
   m.set(60);

  swap(n, m);

  n.display();
  m.display();

return 0;
}
