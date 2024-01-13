/*A program that checks whether two one dimensional arrays of the same size are 
identical (have the same elements) or not.
*/
#include <iostream>
using namespace std;
int main()
{
    const int MAX_SIZE = 100;
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size;
         // Read the size of the arrays
    cout << "Enter the size of the arrays: ";
    cin >> size;
        // Read the elements of the first array
    cout << "Enter " << size << " numbers for array 1: ";
    for(int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
        // Read the elements of the second array
    cout << "Enter " << size << " numbers for array 2: ";
    for(int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
        // Check if the arrays are identical
    bool identical = true;
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }
        // Print the result
    if(identical) {
        cout << "The arrays are identical." << endl;
    } else {
        cout << "The arrays are not identical." << endl;
    }

    return 0;
}
