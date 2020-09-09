#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
 {
  int num{10};
  cout<<"Value of num is "<<num<<endl;
  cout<<"sizeof num is: "<<sizeof num<<endl;
  cout<<"Address of num is: "<<&num<<endl;

  int *p;
  cout<<"Value of p is "<<p<<endl; //Garbage valuse - not initialising p
  cout<<"sizeof num is: "<<sizeof p<<endl;
  cout<<"Address of num is: "<<&p<<endl; //O/P- A hexadecimal number

  p=nullptr;
  cout<<"\nValue of p is "<<p<<endl;

  int *p1{nullptr};
  double *p2{nullptr};
  unsigned long long *p3{nullptr};
  vector<string> *p4{nullptr};
  string *p5{nullptr};

  cout<<"\nsize of p1 is "<<sizeof p1<<endl;
  cout<<"size of p2 is "<<sizeof p2<<endl;
  cout<<"size of p3 is "<<sizeof p3<<endl;
  cout<<"size of p4 is "<<sizeof p4<<endl;
  cout<<"size of p5 is\n "<<sizeof p5<<endl;

  int score{10};
  double high_temp{100.7};
  //int high_temp{100};

  int *score_ptr{nullptr};
  score_ptr=&score;
  cout<<"Value of score is "<<score<<endl;
  cout<<"Address score is: "<<&score<<endl;
  cout<<"Value of score_ptr is: "<<score_ptr<<endl;

//  score_ptr=&high_temp;  ~See explanantion below~
 /* Complie Error - when trying to convert assignment from double to int
    NO Complie Error - when int is used (see above) */
  cout<<endl;

 return 0;
}
