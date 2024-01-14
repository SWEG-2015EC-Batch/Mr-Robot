#include <iostream>
using namespace std;
int main()
{
    const int MAX_SIZE = 100;
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;
    cout << "Enter " << size << " numbers for array 1: ";
    for(int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    cout << "Enter " << size << " numbers for array 2: ";
    for(int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
    bool identical = true;
    for(int i = 0; i < size; i++) {
        if(arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }
    if(identical) {
        cout << "The arrays are identical." << endl;
    } else {
        cout << "The arrays are not identical." << endl;
    }

    return 0;
}