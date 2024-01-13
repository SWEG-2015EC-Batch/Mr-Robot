//A C++ program that reads the total mark of a student and determines their score level based on the mark. 
#include <iostream>
using namespace std;

int main() {
    // Read the total mark of the student
    int mark;
    cout << "Enter the total mark: ";
    cin >> mark;

    // Determine the score level based on the mark
    string scoreLevel;
    if (mark >= 80) {
        scoreLevel = "Excellent";
    } else if (mark >= 60) {
        scoreLevel = "Very Good";
    } else if (mark >= 50) {
        scoreLevel = "Fair";
    } else if (mark >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }

    // Print the score level in tabular format
    cout << "-------------------------" << endl;
    cout << "| Mark\t| Score Level\t|" << endl;
    cout << "-------------------------" << endl;
    cout << "| " << mark << "\t| " << scoreLevel << "\t\t|" << endl;
    cout << "-------------------------" << endl;

    return 0;
}
