#include <iostream>
using namespace std;

//Base class
class Student
{
    private:
        char name[30];
        int  age[50];
        char Roll[50];
    public:
        void Set(void);
        void Get(void);
        Student()
        {
          cout<<"Student constructor called!"<<endl;
        }
        ~Student()
        {
          cout<<"Student destructor called!"<<endl;
        }
};

//function definitions
void Student::Set(void)
{
    cout << "Enter student's basic information:" << endl;
    for(int i=0; i<5; i++){
      cout << "Name: ";
        cin >> name[i];
      cout << "Age: ";
         cin >> age[i];
      cout << "Roll: ";
      cin >> Roll[i];
    }
}

void Student::Get(void)
{
  for(int i=0; i<5; i++){
    cout << "Name: " << name[i] << ",Age: " << age[i] << ",Roll: " << Roll[i] << endl;
  }
}

//Derived class
class Test:public Student
{
    private:
        int Marks[30];
    public:
        void SetTest(void);
        void GetTest(void);
        Test()
        {
          cout<<"Test constructor called!"<<endl;
        }
        ~Test()
        {
          cout<<"Test destructor called!"<<endl;
        }
};

//function definitions
void Test::SetTest(void)
{
    cout << "Enter student's result information:" << endl;
    for(int i=0; i<5; i++){
    cout << "Total Marks: ";
     cin >> Marks[i];
  }
}

void Test::GetTest(void)
{
  for(int i=0; i<5; i++){
    cout << "Total Marks: " << Marks[i]<< endl;
  }
}

int main()
{
    //create object of derived class
    Test std;

    //read student basic and result information
    std.Set();
    std.SetTest();

    //print student basic and result information
    std.Get();
    std.GetTest();

    return 0;
}
