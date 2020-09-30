#include<iostream>
using namespace std;

class Shape
{
    public:
     double a,b;
        void get_data()
        {
            cin>>a>>b;
        }
        void display_area();
};

class Triangle:public Shape
{
    public:
      void display_area ()
      {
          cout<<"Area of triangle "<<0.5*a*b<<endl;
      }
};

class Rectangle:public Triangle
{
    public:
      void display_area()
      {
          cout<<"Area of rectangle "<<a*b<<endl;
      }
};

int main()
{
    Triangle t;

    cout<<"Enter base and altitude: ";
    t.get_data();
    t.display_area();

    Rectangle r;

    cout<<"Enter length and breadth: ";
    r.get_data();
    r.display_area();
    return 0;
}
