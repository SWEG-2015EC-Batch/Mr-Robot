#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    unordered_map<char, int> frequency;

    for (char c : input) {
        frequency[c]++;
    }

    char maxChar = '\0';
    char minChar = '\0';
    int maxFreq = 0;
    int minFreq = input.length() + 1;

    for (const auto& pair : frequency) {
        if (pair.second > maxFreq) {
            maxChar = pair.first;
            maxFreq = pair.second;
        }
        if (pair.second < minFreq) {
            minChar = pair.first;
            minFreq = pair.second;
        }
    }

    cout << "Character with the largest frequency: " << maxChar << endl;
    cout << "Character with the smallest frequency: " << minChar << endl;

    return 0;
}
