// 2. WAP to add, multiply two polynomial using classes and
// objects.

#include<iostream>
using namespace std;

class Poly
{
            int order{};
            int coeff[10];
  public:
            void Initialize();
            void GetOrder();
            void Create();
            void Add(Poly,Poly);
            void poly3order(Poly,Poly);
            void Multiply(Poly,Poly);
            void Display();
};

void Poly::Initialize()
{
            int i;
            for(i=0; i<10; i++)
              coeff[i]=0;
}

void Poly::GetOrder()
{
            cout<<"Highest Order: ";
            cin>>order;
}

void Poly::Create()
{
            int i;
            for(i=order; i>-1; i--)
            {
                        cout<<"Exponent: "<<i<<" ";
                        cout<<"Coefficient: ";
                        cin>>coeff[i];
            }
}

void Poly::Display()
{
            int i;
            for(i=order; i>-1; i--)
            {
                        if(i==order)
                                    cout<<coeff[i]<<"x^"<<i<<" ";
                        else
                        {
                                   if(coeff[i]>=0) cout<<"+";

                                   cout<<coeff[i]<<"x^"<<i<<" ";
                        }
            }
            cout<<endl;
}

void Poly::poly3order(Poly f, Poly s)
{
            if(f.order==s.order)
            order=f.order;
            else
                        if(f.order>s.order)
                        order=f.order;
                        else  if(s.order>f.order)
                        order=s.order;
}

void Poly::Add(Poly first, Poly second)
{
            int i;
            for(i=order; i>-1; i--)
                        coeff[i]=first.coeff[i]+second.coeff[i];
}

void Poly::Multiply(Poly fp, Poly sp)
{
            int i;
            for(i=order; i>-1; i--)
                        coeff[i]=fp.coeff[i]*sp.coeff[i];
}


int main()
{
            Poly p1,p2,p3,p4;
            cout<<"Polynomial 1:\n";
            p1.Initialize();
            p1.GetOrder();
            p1.Create();

            cout<<"Polynomial 2:\n";
            p2.Initialize();
            p2.GetOrder();
            p2.Create();

            cout<<"First Polynomial: ";
            p1.Display();
            cout<<"Second Polynomial: ";
            p2.Display();

            cout<<"Result of addition of 2 Polynomials: ";
            p3.Initialize();
            p3.poly3order(p1,p2);
            p3.Add(p1,p2);
            p3.Display();

            cout<<"Result of multiplication of 2 Polynomials: ";
            p4.Initialize();
            p4.poly3order(p1,p2);
            p4.Multiply(p1,p2);
            p4.Display();
            return 0;
}
