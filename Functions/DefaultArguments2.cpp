//Default Arguments Example-2
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void greetings(string name, string prefix="Dr.", string suffix="");

void greetings(string name, string prefix, string suffix)
{
  cout<<"Hello!"<<prefix + " " + name + " " + suffix<<endl;
}

int main()
{

  greetings("Shreya Dhir","Ms.","Ph.D.");
  greetings("H K Dhir","Mr.","B.Tech");
  greetings("Shruti Priya","Ms.");
  greetings("Harsh Kumar");

  return 0;
}
