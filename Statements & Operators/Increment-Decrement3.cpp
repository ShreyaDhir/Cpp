//Post-Increment - Example 3

#include<iostream>
using namespace std;

int main()
{
  int counter {10} ;
  int result {0};

  cout<<"The counter is: "<<counter<<endl;
  result = counter++;

  /* Here
  * Step 1 - counter = counter + 1; that means r-value is evaluated first
  * Step 2 - result = counter; that means l-value is evaulated
  * in the Step 2 - result is not incremented as the value of result is
  *                 first initialised with counter and then the post-increment
  *                 kicks which increases the value of counter afterwards
  */


  cout<<"The update counter is: "<<counter<<endl;
  cout<<"Result: "<<result<<endl;
  return 0;
}
