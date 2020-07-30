//If statement
#include<iostream>
using namespace std;

/* Case 1 : Number is greater than 10
 * Case 2 : Number is less than 100
 * Case 3 : Number is between 10 and 10
 * Case 4 : Number is within the boudaries of 10 and 100
*/

int main()
{
  int num {};
  const int min{10}, max{100};

  cout<<"Enter the number: ";
  cin>>num;

  if(num >= 10){
    cout<<"Statement 1"<<endl;

    int diff {num - min};
    cout<<num<<" is "<<diff<<" greater than "<<min<<endl;
  }

  if(num <= 100){
    cout<<"Statement 2"<<endl;

    int diff {max - num};
    cout<<num<<" is "<<diff<<" less than "<<max<<endl;
  }

  if(num >= 10&&num <= 100){
    cout<<"Statement 3"<<endl;
    cout<<num<<" is in range"<<endl;
  }

  if(num == 10||num == 100){
    cout<<"Statement 4"<<endl;
    cout<<num<<" is on boundary"<<endl;

  }
  return 0;
}
