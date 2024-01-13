/*This C++ program reads and adds equivalent elements of two-dimensional arrays named first and second. 
The resulting data elements are then printed in table form.*/

#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

void addArrays(int first[][COLS], int second[][COLS], int result[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
}

void printArray(int arr[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << "\t";
        }
            cout << endl;
    }
}

int main() {
    int first[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int second[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROWS][COLS];

    addArrays(first, second, result);
    printArray(result);

    return 0;
}
