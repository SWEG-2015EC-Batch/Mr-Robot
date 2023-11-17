//BMI calculater
#include<iostream>

#include<cmath>
using namespace std;

int main()
{
double weight, height, BMI;

cout << "Enter your weight (in kilo gram ): ";

cin >> weight;

cout << "\nEnter your height (in meter ): ";

cin >> height;
BMI = (weight ) / (height * height);
if(BMI < 18.5)
cout << BMI<<"You are underweight!! " << endl;
if(BMI >= 18.5 && BMI <= 25)
cout <<  BMI << "You are in optimal shape!!" << endl;
if(BMI > 25)
cout << BMI<< "You are overweight!!  " <<endl;
return 0;
}
// mill calculateer

#include <iostream>

using namespace std;

int main()

{    int milesPerGallon, tankCapacity;
  
    cout << "Please enter capacity of  tank: ";
    
    cin >> tankCapacity;

    cout << "Please enter miles per gallons: ";
    
    cin >> milesPerGallon;

    cout << "You can drive  " << tankCapacity * milesPerGallon << "  miles on a full tank." << endl;
    return 0;
}
// Exponenet 
#include <iostream>
#include <cmath>
using namespace std;
int main() {
int x, y;
  cout << "Enter Base: ";
cin >> x;
cout << "\n Exponenet: ";
cin >> y;
  cout << pow(x, y);
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  string employeename;
  double grosssalary, tax, pension , netsalary, bonuspayment;
  double weeklyworkinghour, basesalary, bonusrateperhour;
  cout <<" please enter employee name ";
  cin >> employeename;
  cout <<"please enter bonus  rate per hour ";
  cin >> bonusrateperhour;
  cout << "please enter weekly working hour";
  cin >> weeklyworkinghour;
  cout <<" please  enter base salary ";
  cin >> basesalary ;
  grosssalary = weeklyworkinghour *bonusrateperhour +basesalary;
  tax = grosssalary *0.15;
  pension = grosssalary *0.05;
  bonuspayment  = weeklyworkinghour*bonusrateperhour;
  netsalary = grosssalary +tax-pension;
  cout << "Employee name "<< employeename<< endl;
  cout<<"Net salary"<<netsalary<< endl;
  cout << "Bonus payment"<< bonuspayment;
  return 0;
} 
// file transition speed 
#include <iostream>

using namespace std;

int main() {

  double bytes, time;
  cin >> bytes;
  time= bytes/960;
  cout << "Time" << time << " seconds" << endl;
  return 0;
}




