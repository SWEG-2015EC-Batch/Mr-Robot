//by reading the user x and y input find the value of z=x^y
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float x, y, z;
    cout <<"enter the value of x:";
    cin >>x;
    cout <<"enter the value of y:";
    cin >>y;
    z = pow(x,y);
    cout<<"the value of z:"<<z;
    return 0;
}
