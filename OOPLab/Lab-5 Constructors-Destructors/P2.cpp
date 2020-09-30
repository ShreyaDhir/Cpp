#include <iostream>
#include <iomanip>

using namespace std;

class Time
{
    private:
        int hh,mm;
    public:
        void getTime(void);
        void displayTime(void);
};

void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";
    cin >> hh;
    cout << "Minutes? ";
    cin >> mm;
}


void Time::displayTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":";
    cout << "Time in total seconds: " << seconds;
}

int main()
{
    Time T; //creating objects

    T.getTime();
    T.displayTime();

    return 0;
}
