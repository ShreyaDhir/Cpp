#include<iostream>
using namespace std;
class DM;
class DF
{
float feet,inches;
public:

void get()
{
cout<<"Enter the distance in feet and inches\n";
cin>>feet>>inches;
}
friend void great(DF,DM);
};
class DM
{
float m,centi;
public:
void get()
{
cout<<"Enter the distance in meters and centimeters\n";
cin>>m>>centi;
}
friend void great(DF,DM);
};
void great(DF x,DM y)
{
float a,b;
a=x.feet*30.48+x.inches*2.54;
b=y.m*100+y.centi;
if(a>b)
cout<<"Larger one\n"<<x.feet<<"fet "<<x.inches<<"inches\n";
else
cout<<"Larger one\n"<<y.m<<"me "<<y.centi<<"cem\n";
}
int main()
{
DM y;
y.get();
DF x;
x.get();
great(x,y);
return 0;
}
