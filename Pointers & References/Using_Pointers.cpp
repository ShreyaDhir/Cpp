#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
  int a, *ptr, **ptr1;
  // clrscr();
  ptr=&a;
  ptr1=&ptr;

  cout<<"Address of a: "<<ptr<<endl;
  cout<<"Address of ptr: "<<ptr1<<endl;

  cout<<"After incrementing the address values: "<<endl;
  ptr+=2;

  cout<<"Address of a: "<<ptr<<endl;
  ptr1+=2;
  cout<<"Address of ptr: "<<ptr1<<endl;
  return 0;
}
