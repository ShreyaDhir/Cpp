#include<iostream>
using namespace std;

class Lcm {
   int max{};
public:

 class A

   Lcm(int a, int b) {
    int max = (a > b) ? a : b;
     if (max % a == 0 && max % b == 0)
      {
          cout << "LCM = " << max;
      }
   }

};

int main() {

   int a, b;

   cout << "Enter two numbers:";
   cin >> a >> b;
   Lcm obj(a, b);
   return 0;
}
