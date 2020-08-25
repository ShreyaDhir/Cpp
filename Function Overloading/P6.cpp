// Write a C++ program to create a class called COMPLEX and implement the
//following overloading functions ADD that return a COMPLEX number.
// I. ADD(a,s2) - where a is an integer(real part) and s2 is a complex number.
// II. ADD(s1,s2) - where s1 and s2 are complex objects.

#include<iostream>
#include<conio.h>
using namespace std;

class complex{
   int r,i;
   public:
     void read();
     void print();
     friend complex add(int a, complex s2);
     friend complex add(complex s1, complex s2);
};

void complex::read()
{
  cout<<"Enter the real and imaginaery part respectively: ";
  cin>>r>>i;
}

void complex::print()
{
  cout<<"Enter the real and imaginaery part respectively: ";
  cout<<r<<"+"<<i;
}

complex add(int a, complex s2)
{
  complex t;
  t.r=a+s2.r;
  t.i=s2.i;
  return t;
}

complex add(complex s1, complex s2)
{
  complex t;
  t.r = s1.r + s2.r;
  t.i = s1.i + s2.i;
  return t;
}

int main()
{
  int a=3;
  complex s1, s2, s3;
  s1.read();
    cout<<"\n s1: ";
    s1.print();

  s2.read();
    cout<<"\n s2: ";
    s2.print();

  s2=add(a,s1);
   cout<<"s2 : 2+s1\n";
   cout<<"   : ";
   s2.print();

   s3=add(s1,s2);
   cout<<"s3=s1+s2\n";
   cout<<"s1 : ";
   s1.print();
   cout<<"s2 : ";
   s2.print();
   cout<<"s3 : ";
   s3.print();
}
