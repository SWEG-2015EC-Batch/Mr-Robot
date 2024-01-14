// A C++ Program to Score a Multiple Choice Test.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<char> answerKey = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    vector<char> studentAnswers;

    // Accept student answers
    for (int i = 0; i < 10; i++) {
        char answer;
        cout << "Enter your answer for question " << i + 1 << ": ";
        cin >> answer;
        studentAnswers.push_back(answer);
    }

    // Calculate score
    int score = 0;
    for (int i = 0; i < 10; i++) {
        if (studentAnswers[i] == answerKey[i]) {
            score++;
        }
    }

    // Display marked student answers and score
    cout << "Marked student answers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Question " << i + 1 << ": " << studentAnswers[i] << endl;
    }
    cout << "Score: " << score << "/10" << endl;

    return 0;
}