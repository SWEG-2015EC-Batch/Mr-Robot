#include <iostream>
using namespace std;
int main()
{
float tank_capacity,milepgallon,nonrefullingmiles;
cout<<"please enter full tank capacity in gallons:";
cin>>tank_capacity;
cout<<"please enter the miles driven in a gallon:";
cin>>milepgallon;
nonrefullingmiles=tank_capacity*milepgallon;
cout<<"This car can be driven "<<nonrefullingmiles<<" miles with out refulling";
return 0;

}
