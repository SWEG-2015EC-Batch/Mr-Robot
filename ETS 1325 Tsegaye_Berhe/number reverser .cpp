#include<iostream>
using namespace std;

int main()
{int num,temp,reverse=0;
cout<<"enter the number you want to reverse\n";
cin>>num;
while(num>0){
temp=num%10;
reverse =(reverse*10)+temp;
num=num/10;
}
 cout << "the reverse of the given is"<<reverse<<endl;
    return 0;
}