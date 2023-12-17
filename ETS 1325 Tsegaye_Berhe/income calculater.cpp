#include<iostream>
using namespace std;
// this program is designed to calculate Net salary 
// GS means gross salary, WH means work hour , BTR means bonus time rate , ITR means income tax rate 
//  PE means Pension ,IT means  income tax  and OTP means over time payment 
int main()
{double GS,WH,ITR, BTR,PE,IT,OTP,NS,num;
cout<<" *************income calculater*************\n";
cout << "enter numberof time  you want to use this calculater" << endl;
cin>>num;
for( int i=1; i<=num;i++){
cout <<"please enter your gross salary \n";
cin>>GS;
cout <<"please enter your income tax rate \n";
cin>>ITR;
cout<<"please enter your  work hours  \n";
cin>>WH;
if (WH >40){
cout <<"please enter your  bonus time  rate \n";
cin>>BTR;
OTP=(WH-40)*BTR;}
else {OTP=0;}
if (GS<200){ITR=0;
IT=GS*ITR;}
else if (GS >= 200 && GS <=600){ITR=0.1;
IT=GS*ITR;}
else if (GS >= 600 && GS <=1200){ITR=0.15;
IT=GS*ITR;}
else if (GS >= 1200 && GS <= 2000){ITR=0.2;
IT=GS*ITR;}
else if (GS >= 2000 && GS <=3500){ITR=0.25;
IT=GS*ITR;}
else {ITR=0.3;
IT=GS*ITR;}
PE=GS*0.07;
NS= (GS-PE-IT)+OTP;
cout<<"your  total income after pension and  tax "<< " = "<<NS<<"\n";}
cout << "****************************************";
    return 0;
}