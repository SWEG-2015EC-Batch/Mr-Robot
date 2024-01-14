#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char program1[] = " Braking bad";
    char program2[20];

    strcpy(program2, " Game of thrones");

    cout << "My favorite television programs are: " << endl;
    cout << "1. " << program1 << endl;
    cout << "2. " << program2 << endl;
    return 0;
}