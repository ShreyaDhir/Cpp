// Default Arguments Example-1

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
/* Denotation:- base_cost = a // shipping = c // tax_rate = b */

//Calling function
double cost(double a=100.0, double b=0.06, double c=30.0);

//Defining function
double cost(double a, double b, double c)
{
  return a+=(a*b)+c;
}

//Declaring function
int main()
{
  double cost(0);
  cost = (200.0, 0.008, 60.0);

  cout<<fixed<<setprecision(2);
  cout<<"Cost is "<<cost<<endl;
  
  return 0;
}
