//C-Style Strings
#include<iostream>
#include<cstring> // for c-style string functions
#include<cctype>  // for character-based functions

using namespace std;

int main()
{
   char first_name[20] {};
   char last_name[20] {};
   char full_name[50] {};
   char temp[80] {};

  // cout<<first_name;  /*we get a Garbage Value*/
  //
  // cout<<"Enter your first name: ";
  // cin>>first_name;
  //
  // cout<<"Enter your last name: ";
  // cin>>last_name;

  //   cout<<"Hello "<<first_name<<"! Your name has "<<strlen(first_name)
  //       <<" characters.";
  //   cout<<"\nYour last name "<<last_name<<" has "<<strlen(last_name)
  //       <<" characters.";
  //
  // strcpy(full_name, first_name);   // Copies first_name to fulll_name
  // strcat(full_name," ");   // Concatenates full_name with a spcae
  // strcat(full_name,last_name);   // Concatenates full_name with a spcae
  // cout<<"\n"<<full_name<<endl;

 // cout<<"Your full name is: ";
 // cin>>full_name;
 //
 //  cout<<"Your full name is: "<<full_name<<endl;
  /*Error coming not displaying the full name as it terminates its
  * serives at the space*/

  cout<<"Your full name is: ";
  cin.getline(full_name,50);

   cout<<"Your full name is: "<<full_name<<endl;

   strcpy(temp,full_name);
   if(strcmp(temp,full_name)==0)
    cout<<temp<<" and "<<full_name<<" are the same."<<endl;

  else
    cout<<temp<<" and "<<full_name<<" are different."<<endl;

 for(size_t i{0};i < strlen(full_name); ++i){
   if(isalpha(full_name[i]))
     full_name[i]= toupper(full_name[i]);
 }
 cout<<"\nYour full name is: "<<full_name<<endl;

 // strcpy(temp,full_name);
 if(strcmp(temp,full_name) == 0)
  cout<<temp<<" and "<<full_name<<" are the same."<<endl;

else
  cout<<temp<<" and "<<full_name<<" are different.";

  cout<<"\nResult of comparing the two: "<<temp<<" and "<<full_name<<": "
      <<strcmp(temp,full_name)<<endl;
  cout<<"\nResult of comparing the two: "<<full_name<<" and "<<temp<<": "
          <<strcmp(full_name,temp)<<endl;

    return 0;
}
