#include<iostream>
using namespace std;
int main(){
    //different between if else and while we have seen in the previous about infinite reprtion and now anotheer version 
    for(int i=1;i<=3;i++) {
        int x;
        cout << "enter a passwords :" << endl;
        cin >> x;
        while (x == 2712) {
            string name;
            cout << "enter your name :" << endl;
            cin >> name;
            cout << name << "the place is ADDIS ABABA!!" << endl;
        }
        cout << "try again!"<<endl;
    }
    cout<<"you try 3 times so its locked for un specific minutes !!!";
    return 0;
}
