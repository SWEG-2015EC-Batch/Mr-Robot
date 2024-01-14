#include<iostream>
using namespace std;
int main() { char gender ,f ,m ,M ,F;
double height , weight , Bmi ,n,i;
cout << "******* BMII CALCULATER********\n";
cout << " enter the number of time you want to use this calculater \n";
cin>>n;
for (i=1; i<=n; i++){
cout << "please enter your weight\n "<< " = ";
cin>> weight;
cout << "please enter height in meter \n"<< "  =  ";
cin >> height;
cout << "please enter your  gender as ( m or f) "<< endl;
cin>> gender;
Bmi= weight/ (height*height);
if ( gender == m / gender == M)
 {if ( Bmi < 20.5) 
 {cout<<  " your Bmi is "<< Bmi <<" and you are Underweight \n";}
 else if ( Bmi < 25 && Bmi > 20)
 {cout<<  " your Bmi is "<< Bmi <<" and you are normal weight \n";}
 else if ( Bmi < 30 && Bmi > 25) 
 {cout<<  " your Bmi is "<< Bmi <<" and you are over weight \n";}
 else {cout<<  " your Bmi is "<< Bmi <<" and you are  obisity weight \n"; }
 }
 else if (gender == f / gender ==F){
  if ( Bmi < 18.5){
 {cout<<  " your Bmi is "<< Bmi <<" and you are  underweight weight \n";}
if ( Bmi >18.5 && Bmi < 24)
 {cout<<  " your Bmi is "<< Bmi <<" and you are  normal weight\n ";}
 else if ( Bmi < 30 && Bmi > 24)
 {cout<<  " your Bmi is "<< Bmi <<" and you are  over weight\n";}
 else ( Bmi  >30);
 {cout<<  " your Bmi is "<< Bmi <<" and you are   obisity weight\n";}
 }}
 }
return 0;}