#include<iostream>
using namespace std;

class Dist717
{
    float feet{};
    float inches{};

  public:
    Dist717() {feet=0; inches=0;}

    Dist717(float x, float y)
    {
      feet = x;
      inches = y ;
    }

    void operator +(float &obj1)
    {
      float Temp;
      Temp.feet = feet + obj1.feet*30.48;
      Temp.inches = inches + obj1.inches*2.54;
      return Temp;
    }

    void Display()
    {
      cout<<"Distance: "<<Temp<<endl;
    }
};

int main()
{
  Dist717 obj(10.5, 12.5), obj1;

  obj1=obj;

  obj.Display();
  -obj;
  obj.Display();

  return 0;
}
