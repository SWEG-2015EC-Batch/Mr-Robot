/*A a C++ program to that accepts a two-dimensional array and displays the multiplication
of row elements and the sum of column elements.
*/
#include <iostream>
using namespace std;
int main(){
   int sample[3][4];//5 can be change accord to data
   for(int i=0;i<3;++i){
     for(int j=0;j<4;++j){
    cout<<"enter the "<<i+1<<" row and "<<j+1<<" coloumn number: ";
    cin>>sample[i][j];
     }
     }
     cout << "Multiplication of row elements:\n";
    for (int i = 0; i <3; ++i) {
        int rowProduct = 1;
        for (int j = 0; j <4; ++j) {
            rowProduct *= sample[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowProduct << "\n";
    }
     cout << "Sum of column elements:\n";
    for (int j = 0; j <4; ++j) {
        int colSum = 0;
        for (int i = 0; i <3; ++i) {
            colSum += sample[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << "\n";
    }
     return 0;
}
