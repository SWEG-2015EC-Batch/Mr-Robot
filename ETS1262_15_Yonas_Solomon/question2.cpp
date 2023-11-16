#include <iostream>
using namespace std;
int main() {
    float the_capacity, the_mile, range;
    cout << "enter the capavity in gallons";
    cin >> the_capacity;
    cout << "enter the mile per gallons";
    cin >> the_mile;
    range = the_capacity * the_mile;
    cout << range;
    return 0;
}
