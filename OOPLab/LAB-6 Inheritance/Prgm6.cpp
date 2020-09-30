#include<iostream>
using namespace std;

class Cricketer
{
    public:
     char name[20];
     int age{};
     int jersy_number{};
     int no_odi_played{};
        void Set()
        {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter jersy number: ";
            cin>>jersy_number;
            cout<<"Enter no of odi players: ";
            cin>>no_odi_played;
        }
        void Display()
        {
          cout<<"Name: "<<name<<endl;
          cout<<"Age: "<<age<<endl;
          cout<<"Jersy Number: "<<jersy_number<<endl;
          cout<<"No of Odi Players: "<<no_odi_played<<endl;
        }
};

class Batsman:public Cricketer
{
    public:
      int Runstaken{};
      int Batting_avg{};
      int half_centuries{};
      int No_centuries{};
      int Strike_rate{};
      int Highest_score{};
      char R_L[20];
      int No_sixes{};
      int six_longest{};;

     void Set_Bat()
     {
       cout<<"Enter no of runs taken: ";
       cin>>Runstaken;
       cout<<"Enter batting avg: ";
       cin>>Batting_avg;
       cout<<"Enter no of half centuries: ";
       cin>>half_centuries;
       cout<<"Enter no of centuries: ";
       cin>>No_centuries;
       cout<<"Enter Strike rate: ";
       cin>>Strike_rate;
       cout<<"Enter Highest score: ";
       cin>>Highest_score;
       cout<<"Enter Right or Left: ";
       cin>>R_L;
       cout<<"Enter no of sixes: ";
       cin>>No_sixes;
       cout<<"Enter no of longest sixes: ";
       cin>>six_longest;
     }

      void Display_Bat()
      {
        cout<<"No of runs taken: "<<Runstaken<<endl;
        cout<<"Batting avg: "<<Batting_avg<<endl;
        cout<<"No of half centuries: "<<half_centuries<<endl;
        cout<<"No of centuries: "<<No_centuries<<endl;
        cout<<"Strike rate: "<<Strike_rate<<endl;
        cout<<"Highest score: "<<Highest_score<<endl;
        cout<<"Right or Left: "<<R_L<<endl;
        cout<<"No of sixes: "<<No_sixes<<endl;
        cout<<"No of longest sixes: "<<six_longest<<endl;
      }
};

class Baller:public Cricketer
{
    public:
      char type[20];
      int No_wickets_taken{};
      int Runrate{};
      int Speed{};
      int Economy{};
      char R_L[20];

      void Set_Ball()
      {
        cout<<"Enter type-Pace/Spin: ";
        cin>>type;
        cout<<"Enter no of wickets taken";
        cin>>No_wickets_taken;
        cout<<"Runrate:";
        cin>>Runrate;
        cout<<"Speed";
        cin>>Speed;
        cout<<"Economy";
        cin>>Economy;
        cout<<"Enter Right or Left: ";
        cin>>R_L;
      }

      void Display_Ball()
      {
        cout<<"Type-Pace/Spin: "<<type<<endl;
        cout<<"No of wickets taken"<<No_wickets_taken<<endl;
        cout<<"Runrate:"<<Runrate<<endl;
        cout<<"Speed"<<Speed<<endl;
        cout<<"Economy"<<Economy<<endl;
        cout<<"Right or Left: "<<R_L<<endl;
      }
};

int main()
{
    Batsman t;

    t.Set();
    t.Display();
    t.Set_Bat();
    t.Display_Bat();

    Baller r;

    r.Set();
    r.Display();
    r.Set_Ball();
    r.Display_Ball();
    return 0;
}
