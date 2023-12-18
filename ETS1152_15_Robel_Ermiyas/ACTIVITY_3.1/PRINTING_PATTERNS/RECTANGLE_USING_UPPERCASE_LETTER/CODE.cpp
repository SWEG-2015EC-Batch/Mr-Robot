#include <iostream>
using namespace
int main() {
    char letter = 'A';
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 6; ++j) {
            cout << letter << " ";
            letter++;
            if (letter > 'X') {
                letter = 'A';
            }
        }
        cout << endl;
    }
    return 0;
}
