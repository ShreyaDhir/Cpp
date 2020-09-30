 #include<iostream>
using namespace std;

class Student{
  char name[30];
  int roll_no{};
  float marks[5];
  float tot{};
  float perc{};

public:
  void getdata()
  {
    int i;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter roll number:";
    cin>>roll_no;

   //  for(i=0;i<5;i++)
   //  {
   //  cout<<"Enter marks: ";
   //  cin>>marks[i];
   // }
}

  void display()
  {
    int i;

    cout<<"Name: "<<name<<endl;

    cout<<"Roll number:"<<roll_no<<endl;

    tot=0;
    for(i=0;i<5;i++)
    {
      cout<<"Enter marks: ";
      cin>>marks[i];

      tot+=marks[i];
      cout<<"Total marks is: "<<tot<<endl;
    perc=tot/5;
    cout<<"Percentage : "<<perc<<endl;
   }
}
};

  int main()
  {
     Student s;
     s.getdata();
     s.display();

     return 0;
  }
