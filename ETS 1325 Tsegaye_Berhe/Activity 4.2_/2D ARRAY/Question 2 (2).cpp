#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    int arr[rows][columns];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> arr[i][j];
        }
    }
    int rowProduct = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            rowProduct *= arr[i][j];
        }
        cout << "Product of elements in row " << i + 1 << ": " << rowProduct << endl;
        rowProduct = 1;
    }
    int columnSum = 0;
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            columnSum += arr[i][j];
        }
        cout << "Sum of elements in column " << j + 1 << ": " << columnSum << endl;
        columnSum = 0;
    }
    return 0;
}