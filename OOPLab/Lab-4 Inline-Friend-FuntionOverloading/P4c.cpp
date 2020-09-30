#include<iostream>
#include<cstdio>
using namespace std;
class stud{
char name[20];
int roll;
float tot;
static float totn;
static float avgn;
public:
void getdata(){
cout<<"Name: ";
cin>>name;
cout<<"Roll number: ";
cin>>roll;
cout<<"Total marks: ";
cin>>tot;
}
void calc(){
totn+=tot;
}
void calcAvg(int n){
avgn = totn/n;
}
friend void display(stud &);
};

float stud::totn;
float stud::avgn;
void display(stud &a){
cout<<"Average is "<<a.avgn<<endl;
}
int main(){
stud s[10];
int n;

cout<<"Enter number of students: ";
cin>>n;
for(int i=0;i<n;i++){
s[i].getdata();
s[i].calc();
}
s[0].calcAvg(n);
display(s[0]);
}
