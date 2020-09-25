//copy constructor
#include<iostream>
using namespace std;

class Test{
   private:
     int x, y;
   public:
     Test(int x1, int y1) { x=x1; y=y1;}

     Test(const Test &p2)
     {
        x=p2.x;
        y=p2.y;
     }
     int getX() { return x; }
     int getY() { return y; }
};

int main()
{
  Test p1(10,20);
  Test p2 = p1;

  cout<<"p1.x = "<<p1.getX()<<", p1.y = "<<p1.getY()<<endl;
  cout<<"p2.x = "<<p2.getX()<<", p2.y = "<<p2.getY()<<endl;
  return 0;
}
