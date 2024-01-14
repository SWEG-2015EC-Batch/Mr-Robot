/*A program that store an answer sheet for a test containing 10 multiple choice
questions. The program should accept the student answer, and print the test score along with
the marked student answer.
*/
#include <iostream>
#include <iomanip>
#include<cctype>
using namespace std;

const int numberOfQuestions = 10;

int main() {
    char correctAnswers[numberOfQuestions] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentAnswers[numberOfQuestions];

    cout << "Enter your answers for the test (A, B, C, or D):\n";
    for (int i = 0; i < numberOfQuestions; ++i) {
        cout << "Question " << i + 1 << ": ";
        cin >> studentAnswers[i];
       studentAnswers[i] =toupper(studentAnswers[i]);
    }

    int score = 0;
    cout << "\nCorrect Answers and Your Answers:\n";
    for (int i = 0; i < numberOfQuestions; ++i) {
        cout << "Question " << i + 1 << ": ";
        cout << "Correct: " << correctAnswers[i] << ", Your Answer: " << studentAnswers[i];

        if (correctAnswers[i] == studentAnswers[i]) {
            cout << " (Correct)\n";
            score++;
        } else {
            cout << " (Incorrect)\n";
        }
    }

    cout << "\nYour Test Score: " << score << " out of " << numberOfQuestions << endl;

    return 0;
}







