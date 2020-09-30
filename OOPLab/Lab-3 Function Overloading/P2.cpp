// WAP to find volume of a sphere, a cylinder and a cuboid, using function
// overloading.

#include<iostream>
using namespace std;

double pi=3.14159;

void Vol(int r)
{
  double Vol_Sphere = 1.33 * pi * r * r * r;
  cout<<"Vloume of sphere: "<<Vol_Sphere<<" cc"<<endl;
}

void Vol(int r, double h)
{
  double Vol_Cylinder = pi * r * r * h;
  cout<<"Vloume of cylinder: "<<Vol_Cylinder<<" cc"<<endl;
}

void Vol(int l, int b, int h)
{
  double Vol_Cuboid = l * b * h;
  cout<<"Vloume of cuboid: "<<Vol_Cuboid<<" cc"<<endl;
}

int main()
{
  Vol(2);
  Vol(4,9.5);
  Vol(5,9,8);

  return 0;
}
