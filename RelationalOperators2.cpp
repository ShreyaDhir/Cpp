// Relational Operators -> Example - 2


#include <iostream>

using namespace std;

int main() {
    const int lower{10}, upper{20};
    int num1, num2;

    cout<<boolalpha;

    cout<<"Enter an integer greater than "<<lower<<": ";
    cin>>num1;

    cout<<num1<<" > "<<lower<<": "<<(num1 > lower)<<endl;

    cout<<"Enter an integer less than or equal to "<<upper<<": ";
    cin>>num2;

    cout<<num2<<" <= "<<upper<<": "<<(num2 <= upper)<<endl;

    cout << endl;
    return 0;
}
