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

    public:
        int Marks[30];
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
    cout << "Marks: ";
     cin >> Marks[i];
  }
}

void Test::GetTest(void)
{
  for(int i=0; i<5; i++){
    cout << "Marks: " << Marks[i]<< endl;
  }
}

class Result:protected Test
{
  int total[50];
  int perc[50];
  int grade[50];
public:
  void SetResult(void);
  void GetResult(void);
};

void Result::GetResult(void)
{
  for(int i=0; i<5; i++){
    cin>>total[i];
    perc= (float)(Marks*100)/500);
    cin>>perc[i];
    cin>>"Grade: "<<grade[i];
  }
}

void Result::SetResult(void)
{
  for(int i=0; i<5; i++){
    cout << "Total Marks: " << total[i]<< endl;
    float perc= (Marks*100)/500);
    cout<< "Percentage: "<<perc[i]<<endl;
    cout<<"Grade: "<<grade[i]<<endl;
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

    //print student basic and result information
    std.SetResult();
    std.GetResult();

    return 0;
}
