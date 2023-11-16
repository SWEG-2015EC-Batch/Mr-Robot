#include<iostream>
#include<conio.h>

using namespace std;
int main(){
    char letter;
    cout<<"enter the letter";
    cin>>letter;
    if(letter>='a' && letter<='z'){
        cout<<"\nthe entered letter is in lowercase";
        letter=letter-32;
        cout<<"\nuppercase is: "<<letter;
    }
    else{
        cout<<"\nthe entered letter is in uppercase";
        letter=letter+32;
        cout<<"\nlowercase is:"<<letter;
    }
    return 0;
}
