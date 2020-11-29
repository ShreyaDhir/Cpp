//Implementing Methods 1

/* Inside Class and Outside Class implementation */

#include<iostream>
#include<string>

using namespace std;

class Account{
private:
  //attributes
  string name;
  double balance;

public:
  //methods
  //declared inline
  void set_balance(double bal){balance=bal;}
  double get_balance() {return balance;}

  //methods will be declared outside the class declaration
  void set_name(string n);
  string get_name();

  bool deposit(double amount);
  bool withdraw(double amount);
};

//For class declaration declared outside the
void Account::set_name(string n)
{
  name=n;
}

void Account::get_name()
{
  return name;
}

bool Account::deposit(double amount)
{
  //if verify account
  balance+=amount;
  return true;
}

bool Account::withdraw(double amount)
{
  if(balance-amount >=0)
    {
      balance-=amount;
     return true;
    }
  else
     return false;
}

int main()
{
  Acount Shreya;

  Shreya.set_name("Shreya's account");
  Shreya.set_balance(1000.0);

  if(Shreya.deposit(200.0))
    cout<<"Deposit OK"<<;
  else
    cout<<"Deposit not OK"<<;

  if(Shreya.withdraw(500.0))
    cout<<"Withdrawal"<<;
  else
    cout<<"Not-sufficient funds"<<;

  if(Shreya.withdraw(1500.0))
    cout<<"Withdrawal"<<;
  else
    cout<<"Not-sufficient funds"<<;
  return 0;
}
