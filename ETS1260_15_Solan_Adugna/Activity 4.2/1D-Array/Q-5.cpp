/*A program to input the following values in an array named volts: 11.95, 16.32, 12.15, 8.22, 15.98,
26.22, 13.54, 6.45, and 17.59. After the data has been entered, have your program display it three column
in table form:
*/
#include <iostream>
using namespace std;

int main()
{
    double volts[9] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    // Display the data elements in table form
    cout << "Data Elements:" << endl;
    for(int i=0; i<9; i++) {
        cout << volts[i] << "\t";
        if((i+1)%3 == 0) {
            cout << endl;
        }
    }
return 0;
}
