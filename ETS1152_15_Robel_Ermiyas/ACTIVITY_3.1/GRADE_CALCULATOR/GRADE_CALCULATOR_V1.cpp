/*This C++ program converts a mark of a course entered from the keyboard to its corresponding letter-grade*/

#include <iostream>
using namespace std;

int main()
{
    float mark;

    cout << "Enter your mark: ";
    cin >> mark;

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
