#include<iostream>
#include<math.h>
using namespace std;
class shape
{
protected:
float area;
};
class circle:public shape
{
int radius;
public:
void getdata(int r)
{
radius=r;
}
void calculate()
{
area=3.14*radius*radius;
}
void display()
{
cout<<"Radius of circle:\t"<<radius<<endl;
cout<<"Area:\t"<<area<<endl;
}
};
class triangle:public shape
{
int s1,s2,s3;
public:
void getdata(int a1,int a2,int a3)
{
s1=a1;
s2=a2;
s3=a3;
}
void calculate()
{
int s=(s1+s2+s3)/3;
area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
}
void display()
{
cout<<"Sides of triangle:\t"<<s1<<s2<<s3<<endl;
cout<<"Area:\t"<<area<<endl;
}
};
class rectangle:public shape
{
int l,b;
public:
void getdata(int a,int c)
{
l=a;
b=c;
}
void calculate()
{
area=l*b;
}
void display()
{
cout<<"Length and Breadth of rectangle are:\t"<<l<<b<<endl;
cout<<"Area:\t"<<area<<endl;
}
};
int main()
{
int r,a1,a2,a3,a,c;
cout<<"Enter the radius of circle\t";
cin>>r;
cout<<"Enter the three sides of triangle\t";
cin>>a1>>a2>>a3;
cout<<"Enter Length and Breadth of rectangle\t";
cin>>a>>c;
circle c1;
triangle t1;
rectangle r1;
c1.getdata(r);
c1.calculate();
c1.display();
t1.getdata(a1,a2,a3);
t1.calculate();
t1.display();
r1.getdata(a,c);
r1.calculate();
r1.display();
return 0;
}
