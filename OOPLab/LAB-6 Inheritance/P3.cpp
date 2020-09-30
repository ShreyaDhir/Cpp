#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;

 class Student
 {
        public:
        string name;
        int roll{};
        int age{};

        void SetStud()
        {
          cout<<"Enter the name: ";
          cin>>name;
          cout<<"Enter the roll no: ";
          cin>>roll;
          cout<<"Enter the age: ";
          cin>>age;
        }
        void DisplayStud()
        {
          cout<<"\nName: "<<name;
          cout<<"Roll No.: "<<roll<<endl;
          cout<<"Age: "<<age<<endl;
        }
 };

 class Test : virtual public Student
 {
        public:
        int marks[20];

        void SetTest();
 };

 void Test::SetTest()
 {
   for(int i=1; i<4; i++)
   {
     cout<<"Enter marks "<<i<<": ";
     cin>>marks[i];
   }
 }

 class Activities : virtual public Student
 {
        public:
        int act[20];

        void SetAct();
 };

 void Activities::SetAct()
 {
   for(int i=1; i<3; i++)
   {
     cout<<"Enter marks of activities "<<i<<": ";
     cin>>act[i];
   }
 }

 class Result : public Test, public Activities
 {
        public:
        int tot;
        int tot1;
        int perc{};
        int grade{};

      void Cal()
      {
        for(int i=0; i<3; i++)
        {
          tot+=marks[i];
        }
        for(int i=0; i<2; i++)
        {
          tot1+=act[i];
        }
          int Total;
          Total=tot+tot1;
          cout<<"Total:"<<Total<<endl;

          perc=(Total/500)*100;
          cout<<"Percentage: "<<perc<<endl;

          if(perc>85)
          {
            cout<<"A grade";
          }
          else if(perc<85 && perc>=75)
          {
            cout<<"B grade";
          }
          else if(perc<75 && perc>=50)
          {
            cout<<"C grade";
          }
          else if(perc<50 && perc>=30)
          {
            cout<<"D grade";
          }
          else
          {
            cout<<"Fail";
          }
      }

 };

 int main()
 {

        Result obj;

        obj.SetStud();        //Statement 3
        obj.DisplayStud();


        obj.SetTest();

        obj.SetAct();

        obj.Cal();

        cout<< "\n Name : "<<obj.name;        //Statement 3
        cout<< "\n Roll no. : "<<obj.roll;
        cout<< "\n Age : "<<obj.age;

        cout<< "\n Marks : "<<obj.marks;
        cout<< "\n Activity : "<<obj.act;

        cout<< "\n Total : "<<obj.tot;
        cout<< "\n Percentage : "<<obj.perc;
        cout<< "\n Grade : "<<obj.grade;
      return 0;
 }
