// Mixed Type Expressions


#include <iostream>

using namespace std;

int main() {
    int num1{0}, num2{0}, num3{0};
    const int count{3};
    double average{0.0};
    int sum{0};

    cout<<"Enter three integers: "<<endl;
    cin>>num1>>num2>>num3;

    sum = num1 + num2 + num3;
    average = static_cast<double>(sum)/count;

     /* average = (double)total/count;  Old-Style - WARNING: don't use it!*/

     /* We're using static_cast<Variable_type> instead of (Variable_type) as
      * the static cast is more strict and it double checks whether or not the
      * variable type is valid or not.
      */


    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;


    cout << endl;
    return 0;
}
