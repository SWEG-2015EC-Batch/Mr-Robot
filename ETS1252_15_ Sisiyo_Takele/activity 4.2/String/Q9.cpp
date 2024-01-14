#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char program1[] = "The Bridge";
    char program2[20];

    strcpy(program2, "Peaky Blinders");

    cout << "My favorite television programs are: " << endl;
    cout << "1. " << program1 << endl;
    cout << "2. " << program2 << endl;
    return 0;
}
