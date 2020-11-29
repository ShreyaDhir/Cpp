#include<iostream>
using namespace std;

int main()
{
  int a=10;
  //It is essential to assign a value to a as an uninitialized pointer
  // will lead to cause runtime error by referring to any other location in memory
  int *ptr;

  ptr=&a;
  cout<<"The address of a: "<<ptr<<endl;
  cout<<"The value of a: "<<*ptr<<endl;

  *ptr=*ptr+a;
  cout<<"\nThe revised value of a is: "<<a;
  return 0;
}
