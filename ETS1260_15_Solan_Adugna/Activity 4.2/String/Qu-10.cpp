/* A  program that stores a password in a character array called pass. The program then
ask users for the password and check whether they typed the proper password or not.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char correctPassword[] = "Solen11108E";
    char pass[50]; // Assuming a maximum length for the password is 30 character

    cout << "Enter the password: ";
    cin >> pass;

    // Compare entered password with the correct password
    if (strcmp(pass, correctPassword) == 0) {
        cout << "Correct password! Access granted." << endl;
    } else {
        cout << "Incorrect password! Access denied." << endl;
    }

    return 0;
}
