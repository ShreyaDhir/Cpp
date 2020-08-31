#include<iostream>
#include<string>
using namespace std;

class Player{
public:
  //attributes
  string name;
  int health;
  int xp;

  //methods

  //Inorder for this function to work we must implement the passes parameter
  void talk(string text_to_say) {cout<< name << " says "<< text_to_say; }
  bool is_dead();
};

class Account{
public:
  //attributes
  string name;
  double balance;

  //methods
  bool deposit(double bal) { balance += bal; cout << "In deposit" << endl; }
  bool withdraw(double bal) { balance -= bal; cout << "In withdraw" << endl; }
};

int main()
{
  Account shreya_account;

  shreya_account.name="Shreya";
  shreya_account.balance= 1000.00;

  shreya_account.deposit(1000.00);
  shreya_account.withdraw(500.00);

  Player Shreya;

  Shreya.name="Shreya";
  Shreya.health=100;
  Shreya.xp=12;

  Shreya.talk("Hi there!");
  cout<<"\n";

  Player *enemy = new Player;
  (*enemy).name="Enemy";
  (*enemy).health= 10;
  enemy->xp=-1;

  enemy->talk("You'll lose.");
return 0;
}
