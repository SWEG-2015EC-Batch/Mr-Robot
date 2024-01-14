/* A program that store a list of number and print the even numbers in the array in reverse order they
are entered.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int numbers[100];// 200 can be changed to accord to data
    int even[100];
    int n;
cout<<"Enter the number of list of numbers: ";
cin>>n;
if(n>100||n<0){
    cout<<"error! pass the max limit or have entered negative number";
    return 1;
}
for(int i=0;i<n;i++){
    cout<<"Enter the number "<<i+1<<": ";
    cin>>numbers[i];
    if(numbers[i]%2==0){
    even[i]=numbers[i];
    }else{even[i]=0;
    }
}
cout <<"Even numbers in reverse order are:  ";
for(int i=n-1;i>=0;i--){
     if (even[i] != 0) {
            cout <<even[i] << ", ";
}
}
return 0;
}

