/*Write a program that checks whether two one dimensional arrays of the same size are
identical (have the same elements) or not.*/
#include <iostream>
using namespace std;
int main (){
    int arr[5]={1,2,3,4,7};
    int arr1[5]={3,2,1,4,7};
    for(int i=0;i<5;i++){
if(arr[i]==arr1[i]){
    cout<<arr[i]<<"="<<arr1[i]<<" is equal of index of "<<i<<endl;
}
    }
}
