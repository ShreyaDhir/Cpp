#include <iostream>
using namespace std;

//Base class
class Student
{
    private:
        char name[30];
        int  age[50];
        int Roll[50];
    public:
        void Set(void);
        void Get(void);
};

//function definitions
void Student::Get(void)
{
    cout << "Enter student's basic information:" << endl;
    for(int i=1; i<6; i++){
      cout << "Name "<<i<<": ";
        cin >> name[i];
      cout << "Age "<<i<<": ";
         cin >> age[i];
      cout << "Roll "<<i<<": ";
      cin >> Roll[i];
    }
}

void Student::Set(void)
{
  for(int i=1; i<6; i++){
    cout << "Name: " << name[i] << " ,Age: " << age[i] << " ,Roll: " << Roll[i] << endl;
  }
}

//Derived class
class Test:public Student
{
    private:
        int Marks[];
    public:
        void SetTest(void);
        void GetTest(void);
};

//function definitions
void Test::GetTest(void)
{
    cout << "Enter student's result: " << endl;
    for(int i=1; i<6; i++){
    cout << "Total Marks "<<i<<": ";
     cin >> Marks[i];
  }
}

void Test::SetTest(void)
{
  for(int i=1; i<6; i++){
    cout << "Total Marks: " << Marks[i]<< endl;
  }
}

int main()
{
    //create object of derived class
    Test std;

    //read student basic and result information
    std.Get();
    std.GetTest();

    //print student basic and result information
    std.Set();
    std.SetTest();

    return 0;
}
