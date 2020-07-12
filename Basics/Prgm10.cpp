//Simple program on Variables and Constants

#include<iostream>
using namespace std;

int main()
{
    cout<<"Welcome to Siri's cleaning facilities!"<< endl;

    int largeRooms {0};
    cout<<"\nHow many large rooms would you like cleaned?"<< endl;
    cin>>largeRooms;

    int smallRooms {0};
    cout<<"How many small rooms would you like cleaned?"<< endl;
    cin>>smallRooms;

    cout<<"Estimating the number of rooms cleaned: "<<endl;
    cout<<"Number of large rooms:"<<largeRooms<<endl;
    cout<<"Number of small rooms:"<<smallRooms<<endl;

    const double costLargeRooms{35};
    cout<<"Price per large room: $"<<costLargeRooms<<endl;

    const double costSmallRooms{25};
    cout<<"Price per small room: $"<<costSmallRooms<<endl;

    cout<<"Total cost: $"<<(costLargeRooms*largeRooms) + (costSmallRooms*smallRooms)<<endl;

    const double salesTax{0.06};

    cout<<"__________________________________"<<endl;
    cout<<"Total estimate is: $"<<((costLargeRooms*largeRooms) + (costSmallRooms*smallRooms))+(((costLargeRooms*largeRooms) + (costSmallRooms*smallRooms))*salesTax)<<endl;

    cout<<"The estimate is valid for "<<30<<" days."<<endl;
    return 0;
}
