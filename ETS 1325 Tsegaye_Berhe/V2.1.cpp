#include<iostream>
using namespace std;
int main() { char gender ,f ,m ,M ,F;
double height , weight , Bmi ;
cout<< " This program is design to calculate Bmi"<< endl;
cout << "please enter your weight\n "<< " = ";
cin>> weight;
cout << "please enter height in meter \n"<< "  =  ";
cin >> height;
cout << "please enter your  gender as ( m or f) "<< endl;
cin>> gender;
Bmi= weight/ (height*height);
if ( gender == m / gender == M)
 {if ( Bmi < 20.5) 
 {cout<<  " your Bmi is "<< Bmi <<" and you are Underweight ";}
 else if ( Bmi < 25 && Bmi > 20)
 {cout<<  " your Bmi is "<< Bmi <<" and you are normal weight ";}
 else if ( Bmi < 30 && Bmi > 25) 
 {cout<<  " your Bmi is "<< Bmi <<" and you are over weight ";}
 else {cout<<  " your Bmi is "<< Bmi <<" and you are  obisity weight "; }
 }
 else if (gender == f / gender ==F){
  if ( Bmi < 18.5){
 {cout<<  " your Bmi is "<< Bmi <<" and you are  underweight weight ";}
if ( Bmi >18.5 && Bmi < 24)
 {cout<<  " your Bmi is "<< Bmi <<" and you are  normal weight ";}
 else if ( Bmi < 30 && Bmi > 24)
 {cout<<  " your Bmi is "<< Bmi <<" and you are  over weight";}
 else ( Bmi  >30);
 {cout<<  " your Bmi is "<< Bmi <<" and you are   obisity weight";}
 }
 }
return 0;}