/*This C++ program calculates the total mark of a course entered from the keyboard
and conver it to its corresponding letter-grade */
#include <iostream>
using namespace std;

int main()
{
    float mark;
    double test, quiz, project, assignment, finalExam;

    cout << "Enter your test mark(15%): ";
    cin >> test;
    cout << "Enter your quiz mark(5%): ";
    cin >> quiz;
    cout << "Enter your prokect mark(20%): ";
    cin >> project;
    cout << "Enter your assignment mark(10%): ";
    cin >> assignment;
    cout << "Enter your final exam mark(50%): ";
    cin >> finalExam;

    mark = test + quiz + project + assignment + finalExam;

    if ((mark < 0) || (mark > 100))
    {
        cout << "\nInvalid mark";
    }
    else if (mark < 30)
    {
        cout << "\nYour grade is F";
    }
    else if (mark < 45)
    {
        cout << "\nYour grade is D";
    }
    else if (mark < 55)
    {
        cout << "\nYour grade is C";
    }
    else if (mark < 60)
    {
        cout << "\nYour grade is C+";
    }
    else if (mark < 75)
    {
        cout << "\nYour grade is B";
    }
    else if (mark < 80)
    {
        cout << "\nYour grade is B+";
    }
    else if (mark < 90)
    {
        cout << "\nYour grade is A";
    }
    else if (mark <= 100)
    {
        cout << "\nYour grade is A+";
    }
    return 0;
}
