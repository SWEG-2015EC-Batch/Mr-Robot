//string length
#include<iostream>
#include <string>

using namespace std;
int main(){
    line1:
    string user_name;
    cout<<"enter user name:";
    getline(cin,user_name);
  if(user_name.length()>8){
    cout<< " you enter too long user name "<<endl;
    goto line1;
  }else{
      cout<<"your user name is "<<user_name;
  }
}
