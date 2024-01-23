#include <iostream>
using namespace std;
int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};

    // Printing addresses of each element in the balance array
    for (int i = 0; i < 5; i++) {
        cout << "Address of balance[" << i << "]: " << &balance[i] << endl;
    }

    // Printing addresses of each element in the arr array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Address of arr[" << i << "][" << j << "]: " << &arr[i][j] << endl;
        }
    }

    // Printing array elements using pointers instead of array indices
    double* balancePtr = balance;
    int* arrPtr = *arr;

    for (int i = 0; i < 5; i++) {
        std::cout << "Value of balance[" << i << "]: " << *(balancePtr + i) << endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Value of arr[" << i << "][" << j << "]: " << *(arrPtr + i * 4 + j) << endl;
        }
    }

    return 0;
}
