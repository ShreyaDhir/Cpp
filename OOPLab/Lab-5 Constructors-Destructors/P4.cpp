#include <iostream>
using namespace std;

class array
{
    int *ar, n;
public:
    array(int *arr, int size)
    {
        n = size;
        ar = new int[n];
        for(int i = 0; i < n; i++)
            ar[i] = arr[i];
    }
    array(const array &a, const array &b)
    {
        n = a.n;
        ar = new int[n];
        for(int i = 0; i < n; i++)
            ar[i] = a.ar[i] + b.ar[i];
        cout << "Sum array of above arrays :-" << endl;
        for (int i = 0; i < n; i++)
            cout << ar[i] << "\t";
        cout << endl;
    }
    ~array()
    {
        delete ar;
    }
};

int main()
{
    int n;
    cout<< "Enter the equal length for both the arrays" << endl;
    cin>> n;
    int arr[n];
    cout<< "Enter elements of 1st array" << endl;
    for(int i = 0; i < n; i++)
        cin>> arr[i];
    array x(arr, n);
    cout<< "Enter elements of 2nd array" << endl;
    for(int i = 0; i < n; i++)
        cin>> arr[i];
    array y(arr, n);
    array add(x, y);
}
