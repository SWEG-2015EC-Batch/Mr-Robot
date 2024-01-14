/*An application that inputs a line of text and outputs the text twice, once in all uppercase
and once in all lowercase letters.
*/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
        cout << "Enter a line of text: ";
    getline(cin, input);

    cout << "Uppercase: ";
    for (char character : input) {
        cout << char(toupper(character));
    }
    cout << endl;

    cout << "Lowercase: ";
    for (char character : input) {
        cout << char(tolower(character));
    }
    cout << endl;

    return 0;
}
