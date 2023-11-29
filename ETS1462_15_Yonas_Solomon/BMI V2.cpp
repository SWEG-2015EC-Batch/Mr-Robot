//modify the program to ask user to input his/her gender and print it.from 1 to 17 ,modify to print the program level.
#include<iostream>
#include<math.h>

using namespace std;
int main () {
    double height, weight, BMI;
    cout << "enter the gender (only as M AND F):" << endl;
    char gender;
    cin >> gender;
    cout << "inter the height in meter:" << endl;
    cin >> height;
    cout << "inter the weight in kilo gram :" << endl;
    cin >> weight;
    BMI = weight / pow(height, 2);
    cout << "gender:" << gender << endl;
    cout << "BMI:" << BMI << endl;
    if (gender == 'm' || gender == 'M') {
        if (BMI < 20.5)
            cout << "under weight";
        else if (BMI < 25)
            cout << "normal weight";
        else if (BMI < 30)
            cout << "over weight";
    }
    if (gender == 'f' || gender == 'F') {
        if (BMI < 18.5)
            cout << "under weight";
        else if (BMI < 24)
            cout << "normal weight";
        else if (BMI < 30)
            cout<<"over weight";
                else
            cout << "obesity";
        return 0;
    }
}
