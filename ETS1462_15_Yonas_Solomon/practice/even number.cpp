//An algorithm to display even numbers from 0 and 99
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<100;i++){
        if(i%2==0){
            cout<<i<<" is even number!\n";
        }
    }
}
