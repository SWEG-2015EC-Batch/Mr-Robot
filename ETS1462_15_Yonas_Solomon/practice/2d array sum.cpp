/*Write a C++ program that read and adds equivalent elements of the two-dimensional arrays named first
and second. The program should print the resulting data elements in table form.*/
#include <iostream>

int main() {
    const int rows = 3;
    const int columns = 3;

    int first[rows][columns] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int second[rows][columns] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[rows][columns];

    // Adding equivalent elements of the two arrays
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    // Printing the resulting data elements in table form
    std::cout << "Resulting Data Elements:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
