#include <iostream>

using namespace std;

int main() {
  int rows, stars, spaces;

  // Prompt user for number of rows
  cout << "Enter the number of rows: ";
  cin >> rows;

  // Nested loop for rows and columns
  for (int i = 0; i < rows; ++i) {
    stars = 1; // Stars start at 1 for each row
    spaces = rows - i - 1; // Spaces decrease with each row

    // Print spaces before stars
    for (int j = 0; j < spaces; ++j) {
      cout << " ";
    }

    // Print stars for first and last columns, spaces in between
    for (int j = 0; j < 2 * rows - 1; ++j) {
      if (j == 0 || j == 2 * rows - 2 - i) {
        cout << "*";
      } else {
        cout << " ";
      }
    }

    cout << endl;
  }

  return 0;
}
