//return back where we want using goto
#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    line1:
    cout<<"***the two numbers must  be different\n";
    cout<<"enter the first number\n";
    cin>>x;
    cout<<"enter the second number\n";
    cin>>y;
    z=max(x,y);
    cout<<"maximum nuber is "<<z<<endl;
if(x==y){
    goto line1;
}
}
