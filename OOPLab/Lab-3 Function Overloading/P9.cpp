// Write a program to demonstrate the use of scope resolution operator(::) by
// declaring same variable name globally and locally and display the value of
// global and local variables.

#include<iostream>
using namespace std;

int x=20;  // Global x

int main()
{
  int x = 10; // Local x
  cout << "Value of global x is " << ::x;
  cout << "\nValue of local x is " << x;
  return 0;
}
