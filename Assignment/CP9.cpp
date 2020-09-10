// WAP that uses a class within a class.
#include<iostream>
using namespace std;
class A {
   public:
   class B {
      private:
      int num;
      public:
      void Get(int n) {
         num = n;
      }
      void Put() {
         cout<<"The number is "<<num;
      }
   };
};
int main() {
   A :: B obj;
   obj.Get(9);
   obj.Put();
   return 0;
}
