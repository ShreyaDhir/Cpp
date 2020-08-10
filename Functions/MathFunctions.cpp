// Math Functions
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  double num{};

  cout<<"Enter any number(double): "<<endl;
  cin>>num;

  cout<<"Sqrt of "<<num<<" is "<<sqrt(num)<<endl;
  cout<<"Cube root of "<<num<<" is "<<cbrt(num)<<endl;
  cout<<"Sine of "<<num<<" is "<<sin(num)<<endl;
  cout<<"Cosine of "<<num<<" is "<<cos(num)<<endl;
  cout<<"Ceil of "<<num<<" is "<<ceil(num)<<endl;
  cout<<"Floor of "<<num<<" is "<<floor(num)<<endl;
  cout<<"Round of "<<num<<" is "<<round(num)<<endl;

  double power{};

  cout<<"Enter the number to be raised to: ";
  cin>>power;

  cout<<"The number "<<num<<" raised to the power "<<power<<" is "
      <<pow(num,power)<<endl;

  return 0;

}
