#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<string> names;
    string name;

    cout << "Enter names (one name per line). Enter 'stop' to finish:\n";

    // Read names until 'stop' is entered
    while (true) {
        getline(scin, name);
        if (name == "stop") {
            break;
        }
        names.push_back(name);
    }

    // Sort the names in alphabetical order
    sort(names.begin(), names.end());

    cout << "\nNames in alphabetical order:\n";
    for (const string& n : names) {
        cout << n << endl;
    }

    return 0;
}
