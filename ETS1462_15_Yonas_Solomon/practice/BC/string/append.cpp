//append or add other string on it string
#include<iostream>
#include <string>

using namespace std;
int main() {
    string your_name;
    cout<<"enter your name :\n";
    getline(cin,your_name);
    string email=your_name.append("@gamil.com");
    cout<<"your email is :"<<email<<endl;
}
