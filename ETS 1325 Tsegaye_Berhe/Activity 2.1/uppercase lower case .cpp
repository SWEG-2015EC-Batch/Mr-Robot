// this program  is build to Converted uppercase case to lower case and vise verce
#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    for (char &c : input) {
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c =toupper(c);
        }
    }

    std::cout << "Converted string: " << input << std::endl;

    return 0;
}