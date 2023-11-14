#include<iostream>
using namespace std;
int main() {
double height , weight , Bmi;
cout<< " This program is design to calculate Bmi"<< endl;
cout << "please enter your weight and height"<< endl;
cout << "weight"<< endl;
cin>> weight;
cout<< "height"<< endl;
cin >> height;
Bmi= weight/ (height*height);
cout << "BMI"<< Bmi;
return 0;
} 
#include<iostream>
using namespace std;

int main()
{
double gallons , miles ;
cout <<" this program is design to calculate how"<< endl;
cout <<" many miles can your automobile travel per gallons" << endl;
    cout <<"please enter amount of gallons left on"<< endl;
    cout <<"on your automobile"<<endl;
     cout <<"gallons = ";
     cin >> gallons ;
     miles= 30 *gallons;
     cout << "your car will stop  after " << miles << " miles ";
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
#include<iostream>
#include<cmath>
using namespace std;

int main()
{ 
double power ,number , x , y , result;
number = x;
power =y;
cout << "this program is designed to raise a given number ";
cout << "by given power " << endl;
cout << "please enter the number you want raise ";
cout << "then enter the power you raise with "<< endl;
cout << "x =";
cin >> x;
cout<<"y =";
cin >> y;
 result =pow( number, power);
cout << "="<< result;
return 0;
}
#include <iostream>

using namespace std;

int main() {

  double bytes, time;
  cout << "This program is designed to calculate the amount of time";
  cout << "required to transmit data" << endl;
  cout << "Please enter the number of bytes: ";
  cin >> bytes;
  time= bytes/960;
  cout << "Time" << time << " seconds" << endl;
  return 0;
}
#include <iostream>
#include <cctype>

using namespace std;

string swapCase(string str)
 
{
  for (int i = 0; i < str.length(); i++) {
    if (isupper(str[i])) {
      str[i] = tolower(str[i]);
    } else
 
if (islower(str[i])) {
      str[i] = toupper(str[i]);
    }
  }
  return str;
}

int
 
main()
 
{
  string inputString;
  cout << "Enter a string: ";
  getline(cin, inputString);

  string convertedString = swapCase(inputString);
  cout << "Converted string: " << convertedString << endl;

  return 0;
}

