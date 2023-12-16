// Program that convert mark of a course to corresponding letter-grade
#include <iostream>
using namespace std;

int main(){
    double marks;
    float test, quiz, project, assignment, finalexam;

cout << "Input assesssments of course: "<<endl;
    cout << "Test(15%): ";
    cin >> test;
      cout << "Quiz(5%): ";
      cin >> quiz;
        cout << "Project(20%): ";
        cin  >> project;
            cout << "Assignment(10%): ";
            cin >> assignment;
    cout << "Final exam(50%): ";
    cin >> finalexam;

    marks = test + quiz + project + assignment + finalexam;
    cout<<"Total mark: "<<marks<<endl;

    if(marks < 0 || marks > 100)
    cout << "Not a valid mark!" <<endl;

    else if(marks <= 100 && marks >= 90)
    cout << "Grade: A+" <<endl;

    else if(marks <90 && marks >= 80)
    cout << "Grade: A" <<endl;

    else if(marks <80 && marks >=75)
    cout << "Grade: B+" <<endl;

    else if(marks < 75 && marks >=60)
    cout << "Grade: B" <<endl;

    else if(marks < 60 && marks >=55)
    cout << "Grade: C+" <<endl;

    else if(marks < 55 && marks >= 45)
    cout << "Grade: C" <<endl;

    else if(marks < 45 && marks >= 30)
    cout << "Grade: D" <<endl;

    else
    cout << "Grade: F" <<endl;


    return 0;
}
