/*A application that inputs a line of text, and tokenizes it. Use space characters as 
delimiters.
*/
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string inputText;

    // Input a line of text
    cout << "Enter a line of text: ";
    getline(cin, inputText);

    // Tokenize the input using space characters as delimiters
    istringstream iss(inputText);
    vector<string> tokens;

    string token;
    while (iss >> token) {
        tokens.push_back(token);
    }

    // Output the tokens
    cout << "Tokens: ";
    for (const auto& t : tokens) {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}

