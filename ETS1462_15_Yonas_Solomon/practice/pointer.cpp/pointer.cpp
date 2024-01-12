#include <iostream>
    using namespace std;

    int main() {
        int num = 10;  // Declare an integer variable
        int *ptr;      // Declare a pointer to an integer

        ptr = &num;    // Assign the address of 'num' to the pointer

        cout << "The value of num is: " << num << endl;
        cout << "The memory address of num is: " << &num << endl;
        cout << "The value of num using pointer is: " << *ptr << endl;
        cout << "The memory address stored in the pointer is: " << ptr << endl;

        return 0;
    }
