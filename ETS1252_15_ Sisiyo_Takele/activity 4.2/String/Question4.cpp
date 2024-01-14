#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(std::cin, line);

    vector<std::string> tokens;
    istringstream iss(line);
    string token;

    while (getline(iss, token, ' ')) {
        tokens.push_back(token);
    }

    cout << "Tokens: ";
    for (const auto& t : tokens) {
        cout << t << " ";
    }
    cout << endl;

    return 0;
}
