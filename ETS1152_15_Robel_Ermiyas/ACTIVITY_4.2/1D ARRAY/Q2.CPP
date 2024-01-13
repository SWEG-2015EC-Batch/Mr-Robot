/* A C++ program that input eight integer numbers into an array named temp and
As each number is input, that add the number into a total. After all numbers are input, 
that display the number and their average.*/

#include <iostream>
using namespace std;
int main() {
    int temp[8];
    int total = 0;

    for (int i = 0; i < 8; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp[i];
        total += temp[i];
    }

    double average = static_cast<double>(total) / 8;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}
