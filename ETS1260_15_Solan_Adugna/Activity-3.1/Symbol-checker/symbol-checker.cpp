// C++ program that  whether a character is in upper case, lower case, digit, or a special character.
#include <iostream>
#include <cctype>           
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch)) {
        cout << "Uppercase letter." << endl;
    } else if (islower(ch)) {
        cout << "Lowercase letter." << endl;
    } else if (isdigit(ch)) {
        cout << "Digit." << endl;

        // Check if the digit is even or odd
        int digitValue = ch - '0';
        if (digitValue % 2 == 0) {
            cout << "Even number." << endl;
        } else {
            cout << "Odd number." << endl;
        }
    } else {
        cout << "Special character." << endl;
    }

    if (isalpha(ch)) {
        // Check if the alphabet is a vowel or consonant
        char lowercaseCh = tolower(ch);
        if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
            cout << "Vowel." << endl;
        } else {
            cout << "Consonant." << endl;
        }
    }

    return 0;
}
