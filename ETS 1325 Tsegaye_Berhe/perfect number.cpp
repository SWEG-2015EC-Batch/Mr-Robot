#include<iostream>
using namespace std;

int main()
{int num,divisor ,sum=0;
cout << "enter the number you want to check if the number is perfect or not" << endl;
cin >>num;
for(int i=1;i<num;i++){
divisor=num%i;
if(divisor==0){
sum+=divisor;
}}
if (sum==num) {
cout << "the number is perfect number" << endl;}
else 
cout << "the number is not perfect number" << endl;
    return 0;
}