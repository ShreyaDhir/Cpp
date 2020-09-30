#include<iostream>
using namespace std;

class Student
{
        int roll;
        char name[25];
    public:
        void Get()
        {
                cout<<"\n Enter Student Name: ";
                cin>>name;
                cout<<"\n Enter Roll No.: ";
                cin>>roll;
        }
        void Set()
        {
                cout<<"\n Roll No.:  "<<roll;
                cout<<"\n Student Name:  "<<name<<endl;
        }
};

class Test : public Student      //Class Test derived from Class Student
{
    public:
        int marks[30];
        float perc;
    public:
        void GetData()
        {
                Get();
                for(int i=1; i<6; i++)
                {
                  cout<<"\n Enter marks for Subject "<<i<<": ";
                  cin>>marks[i];
                }
        }
        void Display()
        {
                Set();
                for(int i=1; i<6; i++)
                {
                  cout<<"\n Marks for Subject "<<i<<": "<<marks[i]<<endl;
                }
        }
};

class Activities : public Student      //Class Test derived from Class Student
{
    public:
      int Act1, Act2;

    public:
      void Get_Data()
      {
        cout<<"\n Enter marks of Activity 1:  ";
        cin>>Act1;
        cout<<"\n Enter marks of Activity 2:  ";
        cin>>Act2;
      }

      void display()
      {
        cout<<"\n Marks of Activity 1:  "<<Act1;
        cout<<"\n Marks of Activity 2:  "<<Act2;
      }
};

class Result : public Test, public Activities      //Class Result derived from Class Test
{
    public:
      int total=0;
        void cal()
        {
          for(int i=1; i<6; i++)
          {
               total+=marks[i];
               perc = (total+Act1+Act2)/7.0;

          }
          cout<<"\n\n Total Percentage:  "<<perc;
        }
};
int main()
{
        Result obj;     //Object 'obj' is created of derived Class Result

          obj.GetData();
          obj.Display();

          obj.Get_Data();
          obj.display();

          obj.cal();

        return 0;
}
