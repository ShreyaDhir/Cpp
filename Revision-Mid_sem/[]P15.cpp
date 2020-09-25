//C++ program to demonstrate use of Copy constructor
#include<iostream>
#include<cstring>
using namespace std;

class String{
   private:
     char *s;
     int size;
   public:
     String(const char *str=NULL ); //Constructor
    ~String() { delete [] s;  } //Destructor
     String(const String&); //Copy Constructor
     void print() { cout<<s<<endl; }
     void change(const char *);
};

String::String(const char *str)
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

void String::change(const char *str)
{
    delete [] s;
    size = strlen(str);
    s = new char[size+1];
    strcpy(s, str);
}

String::String(const String& old_str)
{
    size = old_str.size;
    s = new char[size+1];
    strcpy(s, old_str.s);
}

int main()
{
    String str1("GeeksQuiz");
    String str2 = str1;

    str1.print(); // what is printed ?
    str2.print();

    str2.change("GeeksforGeeks");

    str1.print(); // what is printed now ?
    str2.print();
    return 0;
}
