#include<iostream>
using namespace std;

int main()
{int num,lastdigit,firstdigit;
cout <<"enter the number you want to find the last and first diigit of ";
cin>>num;
lastdigit=num%10;
while (num>0){
firstdigit=num%10;
num/=10;
}
    cout << "the first digit is = " << firstdigit<< endl;
    cout << " and the last digit is = "<< lastdigit;
    return 0;
}