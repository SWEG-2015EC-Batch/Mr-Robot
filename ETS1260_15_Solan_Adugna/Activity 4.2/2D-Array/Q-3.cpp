/*A program to store exam scores (test, assignment, quiz, project and final). The
program should determine and print the score level alongside with the total mark in tabular
format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor
and <40 Fail.
*/
#include <iostream>
using namespace std;

int main() {
    int testScore, assignmentScore, quizScore, projectScore, finalScore;
    cout << "Enter test score: ";
    cin >> testScore;

    cout << "Enter assignment score: ";
    cin >> assignmentScore;

    cout << "Enter quiz score: ";
    cin >> quizScore;

    cout << "Enter project score: ";
    cin >> projectScore;

    cout << "Enter final score: ";
    cin >> finalScore;
              // Calculate total mark
    int totalMark = testScore + assignmentScore + quizScore + projectScore + finalScore;
         // Determine score level based on total mark
    string scoreLevel;
    if (totalMark >= 80) {
        scoreLevel = "Excellent";
    } else if (totalMark >= 60) {
        scoreLevel = "Very Good";
    } else if (totalMark >= 50) {
        scoreLevel = "Fair";
    } else if (totalMark >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }
             // Print the results in tabular format
    cout << "\nExam Scores and Results\n";
    cout << "-----------------------\n";
    cout << "Test        : " << testScore << "\n";
    cout << "Assignment  : " << assignmentScore << "\n";
    cout << "Quiz        : " << quizScore << "\n";
    cout << "Project     : " << projectScore << "\n";
    cout << "Final       : " << finalScore << "\n";
    cout << "-----------------------\n";
    cout << "Total Mark  : " << totalMark << "\n";
    cout << "Score Level :" << scoreLevel << "\n";

    return 0;
}


