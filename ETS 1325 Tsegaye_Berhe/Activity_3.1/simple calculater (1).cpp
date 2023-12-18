#include<iostream>
#include <cmath>
using namespace std;
int main()
{char op;
int num3,num4,result2;
double num1, num2,result;
cout << " ********this is a calculater********" << "\n";
do{
cout << "choose the operation (+-*/ %) you want to perform (enter 0 to exit)""\n";
cin>> op; 
if (op==0){
cout<<"you have to chosen to exit calculater\n"<<" thank you for this this program";
break;}
switch (op){
case '+':
cout <<" enter the first number""\n";
cin>>num1;
cout<< "enter the second number""\n";
cin>> num2;
result= num1+num2 ;
cout<< num1<<"+"<< num2<<"="<<result<<"\n"; 
break;
break;
case '-':
cout <<" enter the first number"<<" = ""\n";
cin>>num1;
cout<< "enter the second number"<<"=""\n";
cin>> num2;
result=num1 -num2;
cout<< num1<<"-"<< num2<<"="<<result<<"\n"; 
break;
case '*':
cout <<" enter the first number""\n";
cin>>num1;
cout<< "enter the second number""\n";
cin>> num2;
result=num1*num2;
cout<< num1<<"×"<< num2<<"="<<result<<"\n"; 
break;
case '/':
cout <<" enter the first number""\n";
cin>>num1;
cout<< "enter the second number""\n";
cin>> num2;
result=num1/num2;
cout<< num1<<"/"<< num2<<"="<<result<<"\n"; 
break;
case '%':
cout <<" enter the first number""\n";
cin>>num3;
cout<< "enter the second number""\n";
cin>> num4;
result=num3 % num4;
cout<< num3<<"%"<< num4 <<"="<<result2<<"\n"; 
break;
default:
cout << "you have entered wrong operation" << "\n";
cout<<" so please enter one of the following operation (+,-*/)" << endl;
}}while( op !=0);
cout << "*************************";
    return 0;
}