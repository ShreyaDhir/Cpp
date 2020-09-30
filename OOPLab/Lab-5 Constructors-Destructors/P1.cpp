#include<iostream>
using namespace std;

class complex{
  int real{};
  int img{};

public:
  complex()
  {
    real=img=10;
  }

  complex(int a, int b)
  {
    real=a;
    img=b;
  }

  complex(const complex &x, const complex &y) //copy constructor
  {
    real= x.real;
    img= y.img;
  }
  void display(complex x, complex y)
  {
    cout<<x<<y<<endl;
  }

~complex()
{
  cout<<"Destructor is invoked";
}
};

int main()
{
  complex c;
  complex c2(4,5);
  complex c3(c2);

  c.display();
  c2.display();
  c3.display();
  return 0;
}
