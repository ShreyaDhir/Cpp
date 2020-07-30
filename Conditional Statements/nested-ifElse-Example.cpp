// Shipping

/*
    Shipping cost calculator

    Ask the user for package dimension in inches
    length, width, height - these should be integers

    All dimension must be 10 inches or less or we cannot ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_threshold {100};    // volume
    const int tier2_threshold{500};    // volume

    int max_dimension_length  {10};  // inches

    double tier1_surcharge {0.10};   // 10% extra
    double tier2_surcharge {0.25};  // 25% extra

    // All dimension must be 10 inches or less

    int package_volume{};

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces : ";
    cin >> length >> width >> height;
