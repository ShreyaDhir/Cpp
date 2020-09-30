#include<iostream>
#include<string>
using namespace std;
class book
{
public:
string name,aut;
float price;
public:
void getdata()
{
cout<<"Enter the name of the book\n";
cin>>name;
cout<<"Enter the name of the author\n";
cin>>aut;
cout<<"Enter the price of the book\n";
cin>>price;
}
friend void dis(book[],int);
};

void dis(book x[],int n)
{
int i;
float l,r;
cout<<"Enter the lower and upper price range: \n";
cin>>l>>r;
for(i=0;i<n;i++)
{
if(l<=x[i].price && r>=x[i].price)
{
cout<<"Name of the book: "<<x[i].name<<endl;
cout<<"Name of the author: "<<x[i].aut<<endl;
cout<<"Price of the book: "<<x[i].price<<endl;
}
}
}
int main()
{
int i,n;
float l,r;
cout<<"Enter the no of books\n";
cin>>n;
book x[n];
for(i=0;i<n;i++)
{
x[i].getdata();
}
dis(x,n);

}
