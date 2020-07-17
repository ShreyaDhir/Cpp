//Increment & Decrement Operators

/*
    Increment operator ++
    Decrement operator --

    Increments or decrements its operand by 1
    Can be used with integers, floating point types and pointers

    Prefix   ++num
    Postfix      num++

    Don't overuse this operator!
    ALERT!!! Never use it twice for the same variable in the same statement!!
*/

#include<iostream>
using namespace std;

int main()
{
  int counter {10};
  int result {0};

  cout<<"The counter is: "<<counter<<endl;

  counter = counter + 1;
  cout<<"The counter is: "<<counter<<endl;

  counter++;
  cout<<"The counter is: "<<counter<<endl;

  ++counter;
  cout<<"The counter is: "<<counter<<endl;
  /*If the above two counter statements are commented-out then the ++counter
  will result in 11.*/

  return 0;
}
