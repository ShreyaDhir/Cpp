// WAP that reads records of n Students and sort them in descending order of their
// mark.

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

struct Student
{
  char name[20];
  int marks;
};

  void swap(Student &x,Student &y)
  {
    Student temp;
    temp=x;
    x=y;
    y=temp;
  }

  void sortmarks(Student x[],int n)
  {
    for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if( x[i].marks<x[j].marks)
        swap(x[i],x[j]);
      }
    }
  }

  void display(Student x[],int n)
  {
    cout<<endl<<"Name"<<"\t"<<"Marks"<<endl;
      for(int i=0;i<n;i++)
      cout<<endl<<x[i].name<<"\t"<<x[i].marks;
  }

  int main()
  {
      Student s[100];
      int n;
      cout <<"Enter the no. of students ";
      cin>>n;
      cout<<"Student's information:"<<endl;

      for (int i=0;i<n;i++)
      {
        cout <<endl<<"Enter name : ";
        cin>>s[i].name;
        cout <<endl<<"Enter Maths marks : ";
        cin>>s[i].marks;
      }

      cout<<endl<<"Descending List according to marks: ";
      sortmarks(s,n);
      display(s,n);
      return 0;
  }
