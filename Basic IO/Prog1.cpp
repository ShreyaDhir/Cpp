#include<iostream>
using namespace std;

int main()
{
  char firstName[100], lastName[100];

  cout<<"What is your first name? ";
  cin>>firstName;

  cout<<"What is your second name? ";
  cin>>lastName;

  cout<<"Hi "<<firstName<<" "<<lastName<<endl;
  return 0;
}
