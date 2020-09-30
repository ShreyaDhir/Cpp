#include<iostream>
using namespace std;

class DM;

class DF{
  float feet{};
  float inches{};

public:
  void input(float a, float b){
    feet = a;
    inches = b;
  }
  void display(){
    cout<<feet<<endl;
    cout<<inches<<endl;
  }
  friend void compare(DF, DM);
};

class DM{
  float metre{};
  float cmetre{}; //cmetre is centimetre

public:
  void input(float c, float d){
    metre = c;
    cmetre = d;
  }
  void display(){
    cout<<metre<<endl;
    cout<<cmetre<<endl;
  }
  friend void compare(DF, DM);
};

void compare(DF x, DM y)
{
     float c, d;
     c=x.feet*30.48 + x.inches*2.54;
     d=y.metre*100 + y.cmetre;

     if(c>d)
     cout<<"Larger one \n"<<x.feet<<"ft "<<x.inches<<"inches\n";
     else
     cout<<"Larger one \n"<<y.metre<<"m "<<y.cmetre<<"cm\n";
}

int main()
{
  DM x;
  x.input();

  DF y;
  y.input();

  compare(x,y);

  return 0;
}









}
