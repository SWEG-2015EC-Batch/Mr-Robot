#include <iostream>
using namespace std;

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{ 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }};

    cout<<"Addresses of elements in balance array\n";
   for (int i = 0; i<5; ++i){
        cout<<"Adress of  "<<balance[i]<<" = "<<balance+i<<endl;
   }
    cout<<"Addresses of elements in arr array\n";
    for (int i = 0; i<3; ++i) {
        for (int j = 0; j<4; ++j)
        cout<<"Adress of  "<<arr[i][j]<<" = "<<*(arr+i)+j<<endl;
   }

    cout<<"Print Elements Using the pointer"<<endl;
    for (int i = 0; i<5; ++i)
        cout<<*(balance+i)<<" ";
       cout<<endl;
        cout<<endl;
   for (int i = 0; i<3; ++i) {
        for (int j = 0; j<4; ++j)
            cout<<*(*(arr+i)+j)<<" ";
        cout<<endl;
        }
    cout<<"Using another pointer"<<endl;
    double *bal = balance;
    for (int i = 0; i<5; ++i) cout<<*bal++<<" ";
    cout<<endl;
    cout<<endl;
    int *array = &(arr[0][0]);
    for (int i = 0; i<3; ++i) {
        for (int j = 0; j<4; ++j) cout<<*array++<<" ";
        cout<<endl;
    }
}
