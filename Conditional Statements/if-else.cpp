//if-else Statement
#include<iostream>
using namespace std;

int main()
{
  int num{};
  const int target {10};

  cout<<"Enter the number to be entered: ";
  cin>>num;

  if(num >= target){
    cout<<"\n-------------------------"<<endl;
    int diff{num - target};
    cout<<num<<" is "<<diff<<" greater than "<<target<<endl;
  }
  else{
    cout<<"\n-------------------------"<<endl;
    int diff{target - num};
    cout<<num<<" is "<<diff<<" less than "<<target<<endl;
  }
  return 0;
}
