//To swap Numbers Without Using Temporary Variables
#include<iostream>
using namespace std;

int main()
{
  int a, b;
  cout<<"Enter the two integers:";
  cin>>a>>b;

  a=a+b;
  b=a-b;
  a=a-b;

  cout<<"The numbers after swapping "<<a<<" "<<b;
  return 0;
}
