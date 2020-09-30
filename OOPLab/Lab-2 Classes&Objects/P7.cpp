#include<iostream>
#include<iomanip>
using namespace std;

class Bank{
  // Data Members
char name[20];
int acc_no;
char acc_type[20];
int bal;
  // Attributes
public :

void ini_bal()
{
cout<<"Enter name: ";
cin>>name;
cout<<"Enter Acc no.: ";
cin>>acc_no;
cout<<"Enter Acc Type: ";
cin>>acc_type;
cout<<"Enter Initial Balance: ";
cin>>bal;

}

void deposit()
{
cout<<"Enter Deposit amount: ";
int deposit=0;
cin>>deposit;
deposit=deposit+bal;
cout<<"\nDeposit Balance = "<<deposit;
bal=deposit;

}

void withdraw()
{
int withdraw;
cout<<"\nBalance Amount = "<<bal;
cout<<"\nEnter Withdraw Amount: ";
cin>>withdraw;
bal=bal-withdraw;
cout<<"After Withdraw Balance is \n"<<bal;

}

void display()
{
cout<<"\nDETAILS"<<endl;
cout<<"Name "<<name<<endl;
cout<<"Acc. No. "<<acc_no<<endl;
cout<<"Acc Type "<<acc_type<<endl;
cout<<"Balance "<<bal<<endl;

}
};

int main()
{
  class Bank b;

  b.ini_bal();
  b.deposit();
  b.withdraw();
  b.display();

  return 0;
}
