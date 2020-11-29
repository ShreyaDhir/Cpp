#include<iostream>
using namespace std;

int main()
{
  // Test t;
  int arr[10]={1, 99, 4, 37, 88, 3, 19, 45, 62, 87};
  int num, *ptr;

  // Assigning the base address of arr to ptr
  ptr=arr;

  cout<<"Enter the elements to be searched: ";
  cin>>num;

  for(int i=0; i<10; i++)
  {
    if(*ptr==num)
    {
      cout<<"\n"<<num<<" is present in the array";
      break;
    }
    else if(i==9)
      cout<<"\n"<<num<<" is not present in the array";

    ptr++;
  }
  return 0;
}
