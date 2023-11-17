//BMI calculater
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
// mile calculater
