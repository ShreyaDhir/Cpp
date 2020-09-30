// Create a class which stores name, roll number and total marks for a student.
// Input data for n students. Find the average marks scored by n students, store
// it as a data member of the class and display it using a function which may be
// called without object.

#include<iostream>
using namespace std;

class Student{
  char name[30];
  int roll_no{};
  float marks[5];
  float tot{};

public:
  static float avg;

friend float Average(Student s, int n);
};

void Student::getdata()
{
  int i;
  cout<<"Enter name: ";
  cin>>name;

  cout<<"Enter roll number:";
  cin>>roll_no;
}

void Student::display(Student s, int n)
{
  int i;
  cout<<"Name: "<<name<<endl;

  cout<<"Roll number:"<<roll_no<<endl;

  tot=0;

  for(i=0;i<n;i++)
  {
  cout<<"Enter marks: ";
  cin>>s[i].marks[i];
  }
  tot+=s[i].marks;
  cout<<"Total marks is: "<<tot<<endl;
 }

float Average(Student s, int n)
{
  s.avg=s.tot/n;
  return s.avg;
}

void Student::getdata();
void Student::display();

  int main()
  {
     Student x;
     x.getdata();
     x.display();
     cout<<"Average value: "<<Average(x,5)<<endl;

     return 0;
  }
