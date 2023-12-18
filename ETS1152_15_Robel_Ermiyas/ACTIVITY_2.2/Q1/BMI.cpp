#include<iostream>
using namespace std;
int main()
{
    float height,weight,BMI;
    cout<<"HEIGHT in meter and WEIGHT  in kilograms"<<endl;
    cout<<"please enter your height:";
    cin>>height;
    cout<<"please enter your weight:";
    cin>>weight;
    BMI=(weight/(height*height));
    cout<<"BMI="<<BMI;
    
    return 0;
}
