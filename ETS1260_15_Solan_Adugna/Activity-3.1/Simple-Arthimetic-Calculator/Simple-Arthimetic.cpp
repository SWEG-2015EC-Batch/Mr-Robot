//This program executes basic arithmetic operations.
#include <iostream>
using namespace std;

int main() {
    cout <<"           Basic calculator application " << endl;
    float num_1, num_2, result, status = 0;
    char operate;//operator variable
    do {
        cout <<"Please enter the first number: ";
        cin >> num_1;
        cout <<"Please enter the second number: ";
        cin >> num_2;
        loop:
        cout <<"Enter the type of operation you want,( + , - , * , / , %) : ";
        cin >> operate;
        switch (operate) {
            case '+': result = num_1 + num_2;
                break;
            case '-': result = num_1 - num_2;
                break;
            case '*': result = num_1 * num_2;
                break;
            case '/':{
                  if(num_2 != 0){
                 result = num_1 / num_2;
                 cout <<num_1 <<operate << num_2 << " = " <<result <<endl;
                 }else
                  cout<<"Invalid"<<endl;
                  break;}
            case '%' :{
                if(num_2 != 0){
                 result = (int) num_1 % (int) num_2;
                 cout <<num_1 <<operate << num_2 << " = " <<result <<endl;
                }else
                  cout<<"Invalid"<<endl;
                break;}

            default: cout << "unknown operator: " << operate << '\n';
                goto loop;
        }
        cout <<"Please enter 0 to quit or any other number to continue: ";
        cin >> status;
    }while (status != 0);
    return 0;
}
