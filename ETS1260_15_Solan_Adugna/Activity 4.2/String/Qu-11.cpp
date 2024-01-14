/* A a program that asks the user for its first, middle and last name and then prints the
user’s initials on-screen by printing the first character of each name.
*/

#include <iostream>
using namespace std;

int main() {
    string firstName, middleName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your middle name: ";
    cin >> middleName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Your initials full name letter are: " << firstName[0]<<", "<< middleName[0]<<", " << lastName[0]<<", " << endl;

    return 0;
}
