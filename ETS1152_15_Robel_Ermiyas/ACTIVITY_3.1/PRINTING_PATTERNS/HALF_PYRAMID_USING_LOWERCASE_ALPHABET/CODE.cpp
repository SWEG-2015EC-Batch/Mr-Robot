#include <iostream>
using namespace std;
int main() {
    for (char i = 'a'; i <= 'e'; ++i) {
        for (char j = 'a'; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
