// A C++ program 
#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char pass[] = "password"; // Change the password here

    char input[100];
    cout << "Enter the password: ";
    cin.getline(input, 100);

    if (strcmp(input, pass) == 0) {
        cout << "Access granted!" <<endl;
    } else {
       cout << "Access denied!" << endl;
    }

    return 0;
}

