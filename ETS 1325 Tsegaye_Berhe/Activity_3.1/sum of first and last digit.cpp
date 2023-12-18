#include<iostream>
using namespace std;

int main()
{int num,lastdigit,firstdigit, sum;
cout <<"enter the number you want to find the  sum of last and first diigit of  \n";
cin>>num;
lastdigit=num%10;
while (num>0){
firstdigit=num%10;
num/=10;
}
sum=lastdigit+firstdigit;
    cout << "the first digit is = " << firstdigit<< endl;
    cout << " and the last digit is = "<< lastdigit << endl;
    cout << firstdigit<<" + "<<lastdigit<< " = "<<sum;
    return 0;
}