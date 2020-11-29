#include"iostream.h"
#include<string>

using namespace std;

class Player{
private:
  std::string name;
  int health;
  int xp;

public:
  void set_name(std::string name_val)
  {
    name = name_val;
  }

  //Constructors
  Player() {
    cout<<"No args constructor called."<<endl;
  }

  Player(std::string name) {
    cout<<"Single arg constructor called."<<endl;
  }

  Player(std::string name, int health, int xp) {
    cout<<"Three args constructor called."<<endl;
  }
  ~Player()
  {
    cout<<"Deconstructor called for "<<name<<endl;
  }
};

int main()
{
  {
    Player slayer;
    slayer.set_name("Ram");
  }

  {
    Player shreya;
    shreya.set_name("Ram");

    Player hero("Hero");
    hero.set_name("Ram");

    Player villain("Villain",100,12);
    villain.set_name("Raavan");
  }

  Player *enemy = new Player;
  enemy->set_name("Enemy");

  Player *level_boss = new Player("Level Boss",1000,304);
  level_boss->set_name("Level Boss");

  delete enemy;
  delete level_boss;

  return 0;
}
