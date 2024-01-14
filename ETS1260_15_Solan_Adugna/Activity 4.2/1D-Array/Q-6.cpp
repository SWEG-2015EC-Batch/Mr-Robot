/*A a program that read total mark of a students’ and print the score level with the mark in tabular
format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.
*/

#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int n;
    float totalmark[100];
    string status[100];
     cout<<"enter the number of students: ";
     cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the total mark of student "<<i+1<<": ";
        cin>>totalmark[i];
    if(totalmark[i]>=0 && totalmark[i]<=100){
    if(totalmark[i]>=80){
        status[i]="Excellent";
       }else if(totalmark[i]>=60){
        status[i]="Very Good";
       }else if(totalmark[i]>=50){
        status[i]="Fair";
       }else if(totalmark[i]>=40){
        status[i]="Poor";
       }else if(totalmark[i]<40){
        status[i]="Fail";
       }else{
        status[i]="Error";
       }
       }
       else
     cout<<"Invalid total mark!"<<endl;
    }
    cout<<"students \t "<<"totalscore\t"<<"score status"<<endl;
   for(int i=0;i<n;i++){
    cout<<"student "<<i+1<<"\t\t"<<totalmark[i]<<"\t"<<status[i]<<endl;
   }
return 0;
}
