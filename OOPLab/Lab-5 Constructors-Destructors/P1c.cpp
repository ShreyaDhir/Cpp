// Create a class which stores time in hh:mm format. Include all the
// constructors. The parameterized constructor should initialize the minute value
// to zero, if it is not provided.

#include<iostream>
#include<iomanip>
using namespace std;

class Time
{
    private :
        int hour;
        int minute;
    public :
        //constructor with default value 0
        Time(int h = 0, int m  = 0);
        //setter function
        void setTime(int h, int m);
        //print description of object in hh:mm:ss
        void print();
        //compare two time object
        bool equals(Time);
};

Time :: Time(int h, int m)
{
    hour = h;
    minute = m;
}

void Time :: setTime(int h, int m)
{
    hour = h;
    minute = m;
}

void Time :: print()
{
    cout << setw(2) << setfill('0') << hour << ":"
        << setw(2) << setfill('0') << minute << "\n";
}

bool Time :: equals(Time otherTime)
{
    if(hour == otherTime.hour &&
        minute == otherTime.minute)
        return true;
    else
        return false;
}

int main()
{
    Time t1(10, 50);
    t1.print();  // 10:50:59
    Time t2;  //object created with default value
    t2.print();  // 00:00:00
    t2.setTime(6, 39); //set the new time in object
    t2.print();  // 06:39:09

    if(t1.equals(t2))
        cout << "Two objects are equals\n";
    else
        cout << "Two objects are not equals\n";

    return 0;
}
