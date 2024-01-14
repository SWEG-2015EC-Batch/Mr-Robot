#include <iostream>
#include <string>
using namespace std;
string removeNonAlphabetCharacters(const string& input) {
    string result;
    for (char c : input) {
        if (isalpha(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    string modifiedString = removeNonAlphabetCharacters(input);
    
    cout << "Modified string: " << modifiedString << endl;
    
    return 0;
}
