/*A program to store and print the names of your two favorite television programs.
Initialize one of the strings (assign it the first program’s name) at the time you declare the
array. Initialize the second value in the body of the program with the strcpy() function.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char favoriteProgram1[] = "Breaking Bad";
    char favoriteProgram2[50];

    strcpy(favoriteProgram2, "Stranger Things");

    // Printing the names of favorite television programs
    cout << "My two favorite TV programs are: " << endl;
    cout << "1. " << favoriteProgram1 << endl;
    cout << "2. " << favoriteProgram2 << endl;

    return 0;
}


