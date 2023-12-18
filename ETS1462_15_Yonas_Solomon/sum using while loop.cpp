#include <iostream>
using namespace std;

int main() {
    char input;
    do {
        int nums, sum = 0;
        cout << "Enter the numbers (enter 0 to terminate): ";
        while (true) {
            cin >> nums;
            if (nums == 0) {
                break;
            }
            if (nums % 3 != 0 && nums % 7 != 0) {
                sum += nums;
            }
        }
        cout << "Sum = " << sum << endl;
        cout << "Enter 'r' to stop calculation: ";
        cin >> input;
    } while (input != 'r');
    return 0;
}
