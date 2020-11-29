//LogicalOperator - Example

/* Determine whether or not you have to wear a coat based on wind speed and
temperature */

#include<iostream>
using namespace std;

int main()
{
  bool wear_coat{false};
  double temperature{};
  int wind_speed{};

  cout<<boolalpha;

  const int wind_speed_coat {25}; //You need a coat over this wind speed
  const double temperature_coat {45}; //You need a coat below this temperature

  cout<<"Enter the temperature in (F): ";
  cin>>temperature;

  cout<<"Enter the wind speed in (mph): ";
  cin>>wind_speed;

  // wear_coat = (temperature<temperature_coat||wind_speed>wind_speed_coat);

  wear_coat = (temperature<temperature_coat&&wind_speed>wind_speed_coat);
  cout<<wear_coat;

  return 0;
}
