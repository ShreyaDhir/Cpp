// iii.WAP which displays a given character, n number of times, using a
//function. When the n value is not provided, it should print the given
//character 80 times. When both the character and n value is not provided,
//it should print ‘*’ character 80 times.
//     [Write the above program in two ways:-
//         -using function overloading.
//         -using default arguments.]

#include <iostream>
#include <string>
using namespace std;

void print(int n, char ch)
{
 for (int i = 0; i < n; i++)
 cout << ch;
}
void print(char ch)
{
 for (int i = 0; i < 80; i++)
 cout << ch;
}
void print()
{
 for(int i=0;i<80;i++)
 cout<<"*";
}
int main()
{
 print(10,'a');
 print('$');
 print();
 return 0;
}
