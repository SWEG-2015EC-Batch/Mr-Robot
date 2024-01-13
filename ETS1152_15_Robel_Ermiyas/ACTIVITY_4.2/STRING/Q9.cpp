// A c++ program that stores and prints the names of two favorite television programs.
#include <iostream>
#include <string>
using namespace std;
int main() {
    string favoriteProgram1;
    string favoriteProgram2;

    // Input the names of favorite television programs
    cout << "Enter the name of your favorite television program 1: ";
    getline(cin, favoriteProgram1);

    cout << "Enter the name of your favorite television program 2: ";
    getline(cin, favoriteProgram2);

    // Print the names of favorite television programs
    cout << "Your favorite television programs are:\n"
              << "1. " << favoriteProgram1 << "\n"
              << "2. " << favoriteProgram2 << endl;

    return 0;
}
