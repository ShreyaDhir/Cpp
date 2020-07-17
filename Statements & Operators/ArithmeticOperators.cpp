//Arithmetic Operators

/*
    +   addition
    -   subtraction
    *   multiplication
    /   division
    %   modulo or remainder  (works only with integers)

    +, -. * and /  operators are overloaded to work with multiple types such as
    int, double, etc.
    %  only for integer types
*/

#include<iostream>
using namespace std;

int main()
{
  int num1 {200};
  int num2 {100};

  int result {0};

  //Addition
  result = num1 + num2;
  cout<<num1<<" + "<<num2<<" = "<<result<<endl;

  //Subtraction
  result = num1 - num2;
  cout<<num1<<" - "<<num2<<" = "<<result<<endl;

  //Multiplication
  result = num1 * num2;
  cout<<num1<<" * "<<num2<<" = "<<result<<endl;

  //Division 1
  result = num1 / num2;
  cout<<num1<<" / "<<num2<<" = "<<result<<endl;
  //Division 2
  result = num2 / num1;
  cout<<num2<<" / "<<num1<<" = "<<result<<endl;

  //Remainder
  result = num1 % num2;
  cout<<num1<<" % "<<num2<<" = "<<result<<endl;

  int num3 = 10; /* Don't use num1 agian, c++ doesn't supports redeclarartion
                  of variables */
  int num4 = 3;

  //Remainder
  result = num3 % num4;
  cout<<num3<<" % "<<num4<<" = "<<result<<endl;

  cout<<endl;
  return 0;
}
