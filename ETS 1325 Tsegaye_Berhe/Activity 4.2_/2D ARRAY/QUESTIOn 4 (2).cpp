#include <iostream>
using namespace std;
int main() {
    int arr[3][4];
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    cout << "Array elements and sum of even elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] % 2 == 0) {
                cout << arr[i][j] << "\t";
                sum += arr[i][j];
            } else {
                cout << "*\t";
            }
        }
        cout << endl;
    }
    cout << "Sum of even elements: " << sum << endl;
    return 0;
}