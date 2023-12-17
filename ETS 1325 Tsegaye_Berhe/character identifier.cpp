#include <iostream>
using namespace std;
int main() {
char ch;
cout << "Enter a character: "<<endl;
cin>>ch;
if (isdigit(ch)) {
cout << ch << " is a digit." << endl;
int digit = ch - '0'; 
if (digit % 2 == 0) {
cout << ch << " is an even digit." << endl;
} else {
cout << ch << " is an odd digit." << endl;
}
} else if (isalpha(ch)) {
cout << ch << " is an alphabet." << endl;
if (isupper(ch)) {
cout << ch << " is an uppercase letter." << endl;
} else if (islower(ch)) {
cout << ch << " is a lowercase letter." << endl;
}
ch = tolower(ch);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
cout << "It is a vowel." << endl;
  } else {
cout << "It is a consonant." << endl;
}
} else {
cout << ch << " is a special character." << endl;
}

    return 0;
}