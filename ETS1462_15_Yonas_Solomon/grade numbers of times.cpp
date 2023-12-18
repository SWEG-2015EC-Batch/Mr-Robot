#include<iostream>
using namespace std;

int main()
{ double grade, midexam,finalexam,n;
    cout <<"enter number of time you want to use this calculater\n";
    cin>>n;
    for (int i=1; i<=n;i++){
        cout<< " enter your mid exam mark  out of 40\n"<< " = ";
        cin>>midexam;
        if (midexam>40){
            cout << "you have entered invalid result " << endl;
            cout<< "please enter your mid exam mark  out of 40\n"<< " = ";
            cin>>midexam ;
        }
        cout<< " enter your  final exam mark  out of 60\n" << " = ";
        cin>> finalexam;
        if (finalexam>60){
            cout << "you have entered invalid result " << endl;
            cout<< "please enter your finalmark mark  out of 60\n"<< " = ";
            cin>>finalexam;}
        grade = midexam +finalexam;
        if (grade >= 90){
            cout << "your mark is result is "<< grade<< " out of 100 \n";
            cout << "your grade is A+ \n";}
        else if ( grade>=80 && grade <=89){
            cout << "your  mark is result is "<< grade<< " out of 100 \n";
            cout << "your grade is A \n";}
        else if ( grade >=75 && grade <=79){
            cout << "your mark is result is "<< grade<< " out of 100 \n";
            cout << "your grade is B+\n";}
        else if ( grade>=60 && grade<=74){
            cout << "your mark is result is "<< grade<< " out of 100 \n";
            cout << "your grade is B\n";}
        else if ( grade>=55 && grade<=59)
            cout << "your grade is  C+ \n";
        else if ( grade >=45 && grade<=54 ){
            cout << "your mark  is result is "<< grade<< " out of 100 \n";
            cout << "your grade is    C \n";}
        else if ( grade >=30 && grade<=44 ){
            cout << "your mark is result is "<< grade<< " out of 100 \n";
            cout << "your grade is D \n";}
        else{
            cout << "your grade is result is "<< grade<< " out of 100 \n";
            cout << "your grade is F \n ";
        }}
    return 0;
}
