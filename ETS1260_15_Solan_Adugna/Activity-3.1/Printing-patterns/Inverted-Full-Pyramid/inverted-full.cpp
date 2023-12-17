// C++ Program to print the inverted full pyramid
#include <iostream>
using namespace std;

int main()
{
       int n;
       cout<<"Enter size of row: ";
       cin>>n;
    for (int i = 0; i < n; i++) {
        int space = i;
        for (int j = 0; j < 2 * n - i - 1; j++) {

            if (space) {
                cout << "  ";
                space--;
            }
            else {
                cout << "* ";
            }
        }
        cout << endl;
    }
return 0;
}
