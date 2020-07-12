//Find Ouotient and Remainder
#include<iostream>
using namespace std;

int main()
{
  int Dividend, Divisor, Remainder, Quotient;
  cout<<"Enter the Dividend";
  cin>>Dividend;

  cout<<"Enter the Divisor";
  cin>>Divisor;

  Quotient = Dividend / Divisor;
  Remainder = Dividend % Divisor;

  cout<<"The quotient is "<<Quotient<<endl;
  cout<<"The remainder is "<<Remainder<<endl;
  return 0;
}
