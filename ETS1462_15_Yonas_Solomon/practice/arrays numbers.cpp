#include<iostream>

using namespace std;
int mani(){
    //the next 2 lines is arrays initialization
    int percent [10]={80,50,70,30,90,90,80,80};//weak end score c type    array initialization
    int percents []={80,50,70,30,90,90,80,80};//weak end score c++    array initialization omit arrays size use to add more
    cout<<percents<<endl;
    cout<<percents[3];
    cout<<percents[7];//this one give garbage
    cout<<"my weak wend is looks like as follow"<<endl;
    int i,n=8;
  //we use for loop to to reepet the out put insted of cout 1st cout 2nd....
    for(i=0;i<n;i++){

    }
    return 0;
}
