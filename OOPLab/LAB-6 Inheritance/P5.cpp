#include<iostream>
using namespace std;

class Employee
{
    protected:
    int salary{};

    public:
     char name[20];
     int id{};
        void Get()
        {
            cout<<"Enter name: ";
            cin>>name;

            cout<<"Enter Id: ";
            cin>>id;

        }
        void Display()
        {
          cout<<"Name: "<<name<<endl;
          cout<<"Id: "<<id<<endl;
        }
};

class Regular:public Employee
{
    public:
      double basic_salary{};
      double gs{};
      void Get_Data()
      {
        cout<<"\n Enter Basic Salary:  ";
        cin>>basic_salary;
      }

      void display_reg()
      {
          double hra = basic_salary * 0.2;
          double da  = basic_salary * 0.4;
          gs=basic_salary+hra+da;
          cout<<"Gross Salary: "<<gs<<endl;
      }
};

class PartTime:public Employee
{
    public:
      int hours, pay_per_hour;

      void get_Data()
      {
        cout<<"\n Enter hours: ";
        cin>>hours;
        cout<<"\n Enter pay per hour: ";
        cin>>pay_per_hour;
        cout<<endl;
      }

      void display_part()
      {
          cout<<"Pay per hour "<<hours*pay_per_hour<<endl;
      }
};

int main()
{
    PartTime t;
    t.Get();
    t.get_Data();
    t.Display();
    t.display_part();

    Regular r;
    r.Get();
    r.Get_Data();
    r.Display();
    r.display_reg();
    return 0;
}
