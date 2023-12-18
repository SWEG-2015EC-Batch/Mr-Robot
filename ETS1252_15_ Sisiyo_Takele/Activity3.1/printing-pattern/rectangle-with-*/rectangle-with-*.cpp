#include <iostream>
using namespace std;

int main() {

    // Initialize variables
    int row, column;

                cout << "Please enter the number of columns for the box: ";
                cin >> column;
                cout << "Please enter the number of rows for the box: ";
                cin >> row;
                for (int i = 0; i < row; i++) {
                    for (int j = 0; j < column; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }

      return 0;

}
