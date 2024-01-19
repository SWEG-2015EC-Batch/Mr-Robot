/*Write a program to store exam scores (test, assignment, quiz, project and final). The
        program should determine and print the score level alongside with the total mark in tabular
        format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor
and <40 Fail.*/
#include<iostream>
using namespace std;
int main(){
    int raw;
    cout<<"enter the number of student:";
    cin>>raw;
    int arr[raw][5];
    for(int i=0;i<raw;i++){
    cout<<"enter the results"<<i+1<<endl;
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Student\t Test\t Assignment\t Quiz\t Project\t Final\t Total\t Score Level"<<endl;
    for(int i=0;i<raw;i++){
    int total=0;
        for(int j=0;j<5;j++){
            total +=arr[i][j];
            cout<<arr[i][j];
        }
        cout<<endl;
        if(total>=80){
            cout<<"excellent!";
        }
        else if(total>=60){
            cout<<"very good!";
        }
        else if(total >= 50){
            cout<<"Fair";
        } else if(total >= 40){
            cout<<"Poor";
        } else {
            cout<<"Fail";
        }
        cout<<endl;
    }
    return 0;
}
//more modified
#include<iostream>
using namespace std;
int main(){
    int raw;
    cout<<"Enter the number of students: ";
    cin>>raw;
    int arr[raw][5];
    for(int i=0;i<raw;i++){
        cout<<"Enter scores for student "<<i+1<<": "<<endl;
        for(int j=0;j<5;j++){
            cout<<"Enter score for test, assignment, quiz, project and final: ";
            cin>>arr[i][j];
        }
    }
    cout<<"Student\t Test\t Assignment\t Quiz\t Project\t Final\t Total\t Score Level"<<endl;
    for(int i=0;i<raw;i++){
        int total = 0;
        for(int j=0;j<5;j++){
            total += arr[i][j];
            cout<<arr[i][j]<<"\t ";
        }
        cout<<total<<"\t ";
        if(total >= 80){
            cout<<"Excellent";
        } else if(total >= 60){
            cout<<"Very Good";
        } else if(total >= 50){
            cout<<"Fair";
        } else if(total >= 40){
            cout<<"Poor";
        } else {
            cout<<"Fail";
        }
        cout<<endl;
    }
}
