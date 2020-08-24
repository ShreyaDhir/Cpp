// WAP to find the summation of three numbers by using one function
// only with function name SUM having three arguments. If at run time one
// argument is given to the function SUM, then second and third argument will be
// assumed by default as 10 and 20 respectively. If two arguments are given at
// run time, then third argument will be assumed as 20. Use function with default
// argument concepts.

#include<iostream>
using namespace std;

int SUM(int a, int b=40, int c=30)
{
  int Sum = a + b + c;
  cout<<"The sum of three numbers is: "<<Sum<<endl;
}

int main()
{
  int a, b, c;
  SUM(10,20);
  SUM(20);


  return 0;
}
