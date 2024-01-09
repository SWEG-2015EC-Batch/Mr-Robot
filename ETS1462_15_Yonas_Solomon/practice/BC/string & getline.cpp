//getline use to write a string (word) with a white space
#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"enter a name :";
    getline(cin,name);
   if(name=="yonas solomon"){
         cout<<"the paswoarrd is u!";
    }
   else cout<<"try again!";
}
