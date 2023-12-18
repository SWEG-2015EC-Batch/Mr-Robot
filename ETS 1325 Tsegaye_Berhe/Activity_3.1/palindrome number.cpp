#include<iostream>
using namespace std;

int main()
{int num,temp,reverse=0, originalNumber;
cout<<"enter the number you want to check  wether the  its palindrome  or not\n";
cin>>num;
originalNumber=num;
while(num>0){
temp=num%10;
reverse =(reverse*10)+temp;
num=num/10;
} 
if (reverse==originalNumber)
{cout << "the number is palindrome";}
else 
cout<<"the number is not palindrome";

    return 0;
}