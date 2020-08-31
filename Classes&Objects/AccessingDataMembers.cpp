#include<iostream>
using namespace std;

class Geek{ //className -> Geek
  //Access specifiers
 /* By default: Th Access specifiers in C++ are private */
 public:
  //Data members
string geekname;
  //Member functions
  void printname()
  {
    cout<<"Geekname is "<<geekname;
  }
};

int main()
{
  // Declare an object of class geeks
  Geek obj1;

  // Accessing data member
  obj1.geekname = "Shreya";

  // Accessing member function
  obj1.printname();
  return 0;
}
