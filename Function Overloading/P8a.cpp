// Write a program to demonstrate the concept of call-by-value, call-by-reference
// & call-by address by taking swapping of two numbers as an example.

//CALL_BY VALUE
#include <iostream>
void swap(int , int); //prototype of the function
int main()
{
    int a = 10;
    int b = 20;
    // printing the value of a and b in main
    cout<<"Before swapping the values in main a "<<a<<", b "<<b<<endl;
    swap(a,b);
    // The value of actual parameters do not change by changing the formal
    //parameters in call by value, a = 10, b = 20
    cout<<"After swapping the values in main a "<<a<<", b "<<b<<endl;
}
void swap (int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    // Formal parameters, a = 20, b = 10

    cout<<"After swapping the values in main a "<<a<<", b "<<b<<endl;
}
