#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int specialChars = 0;

    for (char c : input) {
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(c)) {
            digits++;
        } else {
            specialChars++;
        }
    }

    cout << "Frequency of vowels: " << vowels << endl;
    cout << "Frequency of consonants: " << consonants << endl;
    cout << "Frequency of digits: " << digits << endl;
    cout << "Frequency of special characters: " << specialChars << endl;

    return 0;
}
