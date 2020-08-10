#include<iostream>
using namespace std;

void Sum(int num1,int num2=10,int num3=20);

void Sum(int num1,int num2,int num3)
{
  return num1+num2+num3;
}


int main()
{

  void Sum();
  Sum(num2,num3);
  Sum(num3);

  cout<<"The sum is:"<<Sum;
  return 0;
}
