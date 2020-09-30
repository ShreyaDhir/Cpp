// WAP to increment the value of an argument given to function
// USING INLINE function.

#include<iostream>
using namespace std;

inline int Increment(int a)
{
  int Increment = ++a;
}

int main()
{
  int a;
  cout<<"Enter a number: ";
  cin>>a;
  cout<<"Incremented value: "<<Increment(a)<<endl;

  return 0;
}
