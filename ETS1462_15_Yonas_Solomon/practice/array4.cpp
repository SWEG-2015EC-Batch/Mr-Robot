#include<iostream>
using namespace std;
int main(){
    int number[] = {1,2,3,4,
   5,6,7
    ,8};//in array no mater about the wight space bc its in c++
    //cout<<number;//it gives as the adress
    //cout<<number[9];//it gives randoum value bc its out of size (range)
   /* for(int i=0;i<size(number);i++){
        cout<<number<<endl;//gives as all the addres of the numbers all are in the same addres
    }*/
   for(int i=0;i<size(number);i++){
       cout<<number<<" "<<number[i]<<endl;//diplay all the numbers & the adress
   }
    return 0;
}
