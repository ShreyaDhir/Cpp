// Access Modifiers
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player{
private:
       //attributes
          string name="Shreya";
          int xp;
          int health;
public:
       //methods
       void talk(string text_to_say) {cout<< name << " says "<< text_to_say;}
       bool is_dead();
    };

int main()
{
    Player Shreya;

    /* Below commented statements will give Compilation Error */
        //  Shreya.name="Shreya";
      /* error: 'std::cxx11::string Player::name' is private within this context
      Shreya.name="Shreya"; */
      // Shreya.xp=12;
      // Shreya.health=100;

    Shreya.talk("Hi there!");

    return 0;
}
