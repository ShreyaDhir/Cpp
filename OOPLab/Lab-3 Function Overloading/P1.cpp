// WAP to find area of a circle, a rectangle and a triangle, using concept
// of function overloading.

#include<iostream>
using namespace std;

double pi=3.14159;

void Area(int r)
{
  float Area_Circle = pi * r * r;
  cout<<"Area of circle: "<<Area_Circle<<" square unit"<<endl;
}

void Area(int l, int b)
{
  float Area_Rectangle = l * b;
  cout<<"Area of rectangle: "<<Area_Rectangle<<" square unit"<<endl;
}

void Area(double b, double h)
{
  float Area_Triangle = 0.5 * b * h;
  cout<<"Area of Triangle: "<<Area_Triangle<<" square unit"<<endl;
}

int main()
{
  Area(10);
  Area(5,7);
  Area(4.5,6.5);

  return 0;
}
