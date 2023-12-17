#include<iostream>
using namespace std;

int main()
{ double grade, test, quiz , project, assignment, finalexam,n;
cout << " ****** grade calculater ******\n";
cout <<"enter number of time you want to use this calculater\n";
cin>>n;
for (int i=1; i<=n;i++){
cout<< " enter your test mark  out of 15\n"<< " = ";
cin>>test;
if (test >=16){
cout << "you have entered invalid result " << endl;
cout<< "please enter your test mark  out of 15\n"<< " = ";
cin>>test;
}
cout<< " enter your  quiz mark  out of 5\n" << " = ";
cin>> quiz;
if (quiz>=6){
cout << "you have entered invalid result " << endl;
cout<< "please enter your quiz mark  out of 5\n"<< " = ";
cin>>quiz;}
cout<< " enter your  assignment mark out of 10\n"<< " = ";
cin>>assignment;
if (assignment >=11){
cout << "you have entered invalid result 10 " << endl;
cout<< "please enter your assignment mark  out of 10\n"<< " = ";
cin>>assignment;}
cout<< " enter your project mark out of 20 \n"<< " = ";
cin>>project;
if (project >=21){
cout << "you have entered invalid result " << endl;
cout<< "please enter your assignment mark  out of 20\n"<< " = ";
cin>>project;}
cout<< " enter your  final exam mark out of 50\n" << " = ";
cin>>finalexam;
if (finalexam >=51){
cout << "you have entered invalid result " << endl;
cout<< "please enter your assignment mark  out of 50\n"<< " = ";
cin>>finalexam;}
grade=test+quiz+project +assignment +finalexam;
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
 cout <<"***************************\n";
     return 0;
}