//The Assignment Operator

#include<iostream>
using namespace std;

int main()
{
  // Initialsing variables
  const int num1 {10};
  int num2 {20};

  //num1 = 100; /* Reinitialsing the num1 variable */

  //num1 = num2; /* Value of num2 is assigned to num1 */

  //num1="Frank";
  /* error: invalid conversion from 'const char*' to 'int' [-fpermissive] */

  //num1 = 100;
  /* here const int num1 {10} is applied
   * error: assignment of read-only variable 'num1'num1 = 100;
   */

  //100 = num1;
  /* error: lvalue required as left operand of assignment
100 = num1;  */

  cout<<num1<<endl;
  cout<<num2<<endl;

  return 0;
}
