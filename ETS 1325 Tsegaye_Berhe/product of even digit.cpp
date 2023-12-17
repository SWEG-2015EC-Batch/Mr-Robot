#include<iostream>
using namespace std;

int main()
{int num,temp,product=1;
cout << "enter the number you want to find the  product the even digit" << endl;
cin>>num;
while (num>0){
temp=num%10;
if (temp%2==0)
product*=temp;
num/=10;}
    cout << "the product of each even digit of the given number is "<<product;
    return 0;
}