//empity string

#include<iostream>
#include <string>

using namespace std;
int main() {
    string your_name;
    line1:
cout<<"enter a user name ;\n";
getline(cin,your_name);
if(your_name.empty()){
    cout<<"you didnt enter a name :\n";
    goto line1;
}else if(your_name.length()>8) {
    cout << "you enter too long name please enter a character less than 8 !\n";
    goto line1;

}
else
    cout<<"wllcome "<<your_name<<endl;
}
