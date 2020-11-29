//Swap two numbers using temporary variable
#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cout<<"Enter two integers: ";
  cin>>a>>b;

  c=a;
  a=b;
  b=c;

  cout<<"The two numbers after swapping are:"<<a<<" "<<b;
  return 0;
}
