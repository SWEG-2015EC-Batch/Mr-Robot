//A program that accept name of persons and put them in alphabetical order.

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() {
    vector<string> names;

    // Input names until an empty string is entered
    while (true) {
        string name;
        cout << "Enter a name (or press Enter to finish): ";
        getline(cin, name);

        if (name.empty()) {
            break; // Stop input when an empty string is entered
        }

        names.push_back(name);
    }

    // Sort names in alphabetical order
    sort(names.begin(), names.end());

    // Display names in alphabetical order
    cout << "Names in alphabetical order:" << endl;
    for (const auto& name : names) {
        cout << name << endl;
    }

    return 0;
}

