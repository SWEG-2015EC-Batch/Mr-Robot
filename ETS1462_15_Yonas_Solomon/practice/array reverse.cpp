#include <iostream>
using namespace std;
int main (){
    int arr[5];
    cout<<"enter the numbers";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"the reverse of a number \n";
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0;
}
