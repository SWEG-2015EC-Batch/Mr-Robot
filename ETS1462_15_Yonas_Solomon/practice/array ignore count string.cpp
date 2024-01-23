/*Write a program that read a string and count number of vowels and consonants alphabet
present in a string.*/
#include<iostream>
#include<string>
using namespace std;
int main() {

    int r, count=0,count1=0;
    string word;
    cout<<"enter the number of times you want to run:";
    cin>>r;
    cin.ignore();//use for not to reapit upper case
    for(int i=0;i<r;i++){
        cout<<"enter any word:\n";
        getline(cin,word);
     for(char c : word){
     if(isalpha(c)){
         if(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u'){
             count++;
         }
         else{
             count1++;
         }
     }
     }
     cout<<"the word is:"<<word<<endl;
     cout<<"the number of vawol:"<<count<<endl;
     cout<<"the number of consonant"<<count1<<endl;
    }
    return 0;
}
