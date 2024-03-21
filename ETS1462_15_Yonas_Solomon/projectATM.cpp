//ATM machine
#include <iostream>

using namespace std;
//balance,deposite,withdarw,manu & exit
void manu(){
    cout<<"*********manu*********"<<endl;
    cout<<"1 show balance\n";
    cout<<"2 deposite\n";
    cout<<"3 withdraw\n";
    cout<<"4 exit\n";
    cout<<"******************"<<endl;
}
int main(){

    int option;
    double balance = 1221;
    do{
    manu();
    cout<<"enter your choice"<<endl;
    cin>>option;

            switch (option) {
                case 1:
                    cout << "your balance is " << balance << "$" << endl;
                    break;
                case 2:
                    cout << "enter your deposite\n";
                    double deposite;
                    cin >> deposite;
                    balance += deposite;
                    cout << "your deposite is " << deposite << endl;
                    cout << "your total balance is " << balance << "$" << endl;
                    break;
                case 3:
                    cout << "enter your withdraw\n";
                    double withdraw;
                    cin >> withdraw;
                    if (withdraw <= balance) {
                        balance -= withdraw;
                        cout << "your withdraw is " << withdraw << endl;
                        cout << "your total balance is " << balance << "$" << endl;
                    } else {
                        cout << "your balance is not sufficent\n ";
                    }

                    break;
            }
        } while (option!=4);
}
