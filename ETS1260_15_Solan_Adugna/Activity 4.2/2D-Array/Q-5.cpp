#include <iostream>
using namespace std;

int main() {
   int size;
cout<<"Enter number of people:  ";
cin>>size;//The should less than 6 since It requires further intilazition,  If not it is initialized by FALSE

    bool friendship[size][size] = {
        {false, true, false, true, false},
        {true, false, true, false, false},
        {false, true, false, false, false},
        {true, false, false, false, true},
        {true, true, false, true, false}
    };

    cout << "Friendship Matrix:\n";
    cout << "   ";
    for (int i = 0; i < size; ++i) {
        cout << i << "   ";
    }
    cout << "\n";
    cout << "-------------------------\n";
    for (int i = 0; i < size; ++i) {
        cout << i << " |";
        for (int j = 0; j < size; ++j) {
            if (friendship[i][j]) {
                cout << " *  ";
            } else {
                cout << "    ";
            }
        }
        cout << "\n";
    }

    int pairsCount = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (friendship[i][j]) {
                pairsCount++;
            }
        }
    }

    cout << "\nNumber of pairs of friends: " << pairsCount << "\n";

    return 0;
}




