// Declare Classes and Object
#include <iostream>
#inclde <vector>
#include <string>

using namespace std;

class Player{
       //attributes
          string name;
          int xp;
          int health;

       //methods
       void talk(string);
       bool is_dead();
    };

int main()
{
    Player hero;
    Player sidekick;

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;
    return 0;
}
