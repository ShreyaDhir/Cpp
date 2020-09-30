#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int imag;
     /* Function to set the values of
      * real and imaginary part of each complex number
      */
     void setvalue(Complex c)
    {
      for(int i=0; i<=10; i++)
      {
        cin>>c.real;
        cin>>c.imag;
      }
    }
	/* Function to display the sum of two complex numbers */
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
  };

int main()
    {
        Complex c;

        for(int i=0; i<=10; i++)
        {
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        setvalue();
        }

        c.display();
    return 0;
    }
