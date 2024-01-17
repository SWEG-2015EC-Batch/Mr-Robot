#include <iostream>
using namespace std;
int main (){
    int arr[8]={1,2,33,44,5,7,8,12};
    cout<<"the reverse of a number \n";
    for(int i=7;i>=0;i--){
        if(arr[i]%2==0){
        cout<<arr[i]<<endl;}
    }
    return 0;
}
