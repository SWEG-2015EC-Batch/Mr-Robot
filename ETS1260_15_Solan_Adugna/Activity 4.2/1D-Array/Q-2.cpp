/*A program to input eight integer numbers into an array named temp. As each number is input, add the number into a total. 
After all numbers are input,display the number and their average.*/

#include <iostream>
using namespace std;

int main()
{
    int temp[8];
    float total = 0;
          // Input numbers and add to total
    for(int i=0; i<8; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> temp[i];
        total += temp[i];
    }
           // Calculate average
    float average = total / 8;

    // Display total and average
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}

