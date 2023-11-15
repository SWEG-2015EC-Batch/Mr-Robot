#include <iostream>
using namespace std;
int main()
{
int fuelTank;
int milesPerGallons;
cout<<"Enter the capacity, in gallons, of an automobile fuel tank : ";
cin>>fuelTank;
cout<<"Enter the miles per gallons the automobile can be driven : ";
cin>>milesPerGallons;
cout<<"Automobile can be driven without refuelling "<<fuelTank * milesPerGallons<<" miles."<<endl;

return 0;
}
