// Random Numbers
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

/*Computers are bad at creating random rumbers*/
 double pi{3.1459};

 double cal_area_cylinder(double radius)
 {
   return pi * radius * radius;
 }

 void area_cylinder()
 {
   int radius{};
   cout<<"Enter radius: ";
   cin>>radius;

   cout<<"The area of the cylinder is: "<<cal_area_cylinder(radius)<<endl;
 }

double cal_voulume_cylinder(double radius, double height)
{
  return cal_area_cylinder(radius) * height;
}

void voulume_cylinder()
{
  int radius{};
  int height{};
  cout<<"Enter radius: ";
  cin>>radius;

  cout<<"Enter height: ";
  cin>>height;

  cout<<"The volume of the cylinder is: "<<cal_voulume_cylinder(radius,height)<<endl;
}

int main()
{
  area_cylinder();
  voulume_cylinder();

  return 0;
}
