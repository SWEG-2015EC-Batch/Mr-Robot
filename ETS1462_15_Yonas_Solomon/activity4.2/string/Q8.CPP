// A C++ program that inputs a line of text and outputs the text twice, once in all uppercase and once in all lowercase letters.
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string inputText;

    cout << "Enter a line of text: ";
    getline(cin, inputText);

    string uppercaseText = inputText;
    string lowercaseText = inputText;

    // Convert the text to uppercase
    for (char& c : uppercaseText) {
        c = toupper(c);
    }

    // Convert the text to lowercase
    for (char& c : lowercaseText) {
        c = tolower(c);
    }

    cout << "Uppercase text: " << uppercaseText << endl;
    cout << "Lowercase text: " << lowercaseText << endl;

    return 0;
}
