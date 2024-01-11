/*A program to declare a 4-by-5 array of integers and initialize with the data:
 16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, and 3.
 */

#include <iostream>
using namespace std;

int main()
{
    int arr[4][5] = {{16, 22, 99, 4, 18},{-258, 4, 101, 5, 98},{105, 6, 15, 2, 45},{33, 88, 72, 16, 3}};

    // Print the array
    for(int i=0; i<4; i++) {
        for(int j=0; j<5; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

