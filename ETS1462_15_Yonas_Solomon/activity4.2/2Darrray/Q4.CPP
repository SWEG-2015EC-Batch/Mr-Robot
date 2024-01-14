/* A C++ program that uses a nested loop to read the 2D array elements and calculate the sum of even elements. 
It also prints the array elements in tabular form, replacing odd numbers with '*'. 
Finally, it prints the sum of even elements.*/

#include <iostream>
using namespace std;
int main() {
    int arr[3][4];
    int sum = 0;

    // Read the array elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Print the array elements and calculate the sum of even elements
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

    // Print the sum of even elements
    cout << "Sum of even elements: " << sum << endl;

    return 0;
}
