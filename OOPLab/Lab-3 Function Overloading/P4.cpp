// WAP to find square and cube of a number using inline function.

#include<iostream>
using namespace std;

inline int Square(int q)
{
  double Square = q * q;

}

inline int Cube(int t)
{
  double Cube = t * t * t;
}

int main()
{
  int q;
  cout<<"Enter a number: ";
  cin>>q;
  cout<<"Square of the number: "<<Square(q)<<endl;

  int t;
  cout<<"Enter a number: ";
  cin>>t;
  cout<<"Cube of the number: "<<Cube(t)<<endl;

  return 0;
}
