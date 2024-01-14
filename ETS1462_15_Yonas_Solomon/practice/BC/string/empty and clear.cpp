//empity string
#include<iostream>
#include <string>

using namespace std;
int main() {
    string your_name;
    line1:
cout<<"enter a user name :\n";
getline(cin,your_name);
    cout<<"wllcome "<<your_name<<endl;
cout<<"your name has cleared \n";
your_name.clear();
cout<<"wellcome "<<your_name<<endl;
//what if we need to add another string in one string eg in email
string email=your_name.append("@gamil.com");
cout<<"your email is :"<<email<<endl;
}
