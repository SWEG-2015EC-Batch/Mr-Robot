#include<iostream>
using namespace std;

int main()
{int num, temp, counter=0;
cout <<"enter the numberyou want to reverse\n"<< "=";
cin>>num;
while (num >0)
{temp =num %10;
counter++;
num=num/10;
}
cout << "number of the digit in the given number is "<<counter;
 return 0;
}