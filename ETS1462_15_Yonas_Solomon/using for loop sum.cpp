#include <iostream>
using namespace std;

int main() {
    
    for(char t = 'k'; t != 'r';) {
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
        cin >> t;
        cout<<"enter 'e' to continue ";
    }
    return 0;
}
