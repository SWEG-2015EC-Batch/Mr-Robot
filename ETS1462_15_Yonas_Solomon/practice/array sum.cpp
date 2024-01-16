#include <iostream>
using namespace std;
int main (){
    int arr[5];
    cout<<"enter the numbers";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"the sum is "<<endl;
    float sum=0;
    for(int i=4;i>=0;i--){
        sum+=arr[i];
    }
    cout<<sum;
}
