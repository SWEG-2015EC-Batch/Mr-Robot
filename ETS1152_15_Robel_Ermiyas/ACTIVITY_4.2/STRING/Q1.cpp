// A C++ program that reads a string from the user and counts the number of vowels and consonants present in the string. 
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0;
    int consonants = 0;

    for (char c : str) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
