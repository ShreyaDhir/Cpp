//Nested if-else statement - GRADES
#include<iostream>
using namespace std;

int main()
{
  int score{};
  cout<<"Enter your score between 0 to 100: ";
  cin>>score;
    char grade {};

  if(score >= 0 && score <= 100){
     if(score>=90){
     grade = 'A';}


     else if(score>=80){
      grade = 'B';
      }

     else if(score>=70){
      grade = 'C';
      }

     else if(score>=60){
      grade = 'D';
      }

     else if(score>=50){
      grade = 'E';
      }

     else{
      grade = 'F';
      }
      cout<<"You scored "<<grade<<"!"<<endl;
    
  }
else{
  cout<<"Sorry "<<score<<" is not in range."<<endl;
}
return 0;
}
