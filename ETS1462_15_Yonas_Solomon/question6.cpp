#include<iostream>
#include<ctype.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    unsigned int File_Size, Time_for_Transmition;
    cout<<"Enter the File Size in Bytes"<<'\n';
    cin>>File_Size;
    cout<<"It will take "<<File_Size/960<<" seconds to transmit this file"<<'\n';
    return 0;
}
