/*A C++ program that read and adds equivalent elements of the two-dimensional arrays named first
and second. The program should print the resulting data elements in table form.
*/
#include <iostream>
using namespace std;
int main(){
    int first[3][4];
    int second[3][4];
    int add[3][4];
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<"enter the "<<i+1<<" row and the "<<j+1<<" column number of the first array: ";
            cin>>first[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<"enter the "<<i+1<<" row and the "<<j+1<<" column number of the second array: ";
            cin>>second[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
           add[i][j]=first[i][j]+second[i][j];
    }
    }
     for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            cout<<add[i][j]<<"\t";
      }
      cout<<"\n";
     }

return 0;
}
