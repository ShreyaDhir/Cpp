#include<iostream>
#include<cmath>
using namespace std;

class Length
{
  public:
  int x1{};
  int x2{};
  int y1{};
  int y2{};

    void get_data()
      {
        cin>>x1>>y1;
        cin>>x2>>y2;
      }

    void Display()
      {
        cout<<"X1= "<<x1<<" Y1= "<<y1<<endl;
        cout<<"X2= "<<x2<<" Y2= "<<y2<<endl;
      }

    void calc_distance()
       // O for Ordinate and a for Abscissa
    {
      // double o = pow (x2-x1,2);
      // double a = pow (y2-y1,2);
      //
      // distance = pow(o + a,0.5);
      // cout<<distance<<endl;

      int k;
      float l;
      k=(pow(x2-x1,2)+pow(y2-y1,2));
      l=pow(k,0.5);
      cout<<"\n Distance between point(X1,Y1) and (X2,Y2) is: "<<l << "\n\n";
    }
};

int main()
{
  class Length m;

  m.get_data();

  m.Display();

  // cout<<"Distance between the two points is: "<<endl;

  m.calc_distance();

  return 0;
}
