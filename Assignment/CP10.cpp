// WAP that reads records of n students and find the
// -> average mark of each student
//  # of students above average mark in the class.
//  # of students below average mark in the class.
// -> Sort students in ascending order of their mark.
// Display the name of the student secured highest mark.
// Display the roll number of the student secured highest mark from bottom.

#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Student
{
public:
  char name[20];
  int marks;
  int roll;
  float Avg;
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
        if( x[i].marks>x[j].marks)
        swap(x[i],x[j]);
      }
    }
  }

  void Average(Student x[] ,int n)
  {
    int Avg=0;
    int Sum=0;
    int i;
    for(i=0; i<n; i++)
      {
          Sum+=x[i].marks;
          Avg=Sum/n;
      }

      cout<<"\nAverage marks: "<<Avg<<endl;
    if(Avg > 0 && Avg < 50)
    {
      cout<<"Number of Students scoring below average:";
      cout<<sizeof(Avg)/sizeof(Avg)<<endl;
    }
    else if(Avg > 50 && Avg < 100)
    {
      cout<<"Number of Students scoring above average:";
      cout<<n-(sizeof(Avg)/sizeof(Avg))<<endl;
    }
  }

  void Display(Student x[],int n)
  {
  cout<<endl<<"Name"<<"\t"<<"Marks(out of 100)"<<endl;
  for(int i=0;i<n;i++)
  cout<<endl<<x[i].name<<"\t"<<x[i].marks;
   int max[0];

    for(int i=0; i<n; i++)
    {
        if(max[i]>x[i].marks)
        {
          cout<<"\n\nHighest scorer: "<<endl;
          max[i]=x[i].marks;
          cout<<max[i]<<endl;
          cout<<x[i].name<<endl;
          cout<<n-(x[i].roll)<<endl;
        }
    }
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
        cout <<endl<<"Enter marks (out of 100): ";
        cin>>s[i].marks;
        cout <<endl<<"Enter Roll no: ";
        cin>>s[i].roll;
      }

      cout<<endl<<"Ascending List according to marks: ";
      sortmarks(s,n);
      Display(s,n);

      Average(s,n);

      return 0;
  }
