//This program calculates the net salary of an employee based on inputs provided by the user.
#include <iostream>
using namespace std;
int main(){

    const float PENSION = 0.07;
    int overtime = 0, gross_salary, working_hour;
    int pension, net_salary, tax_rate, income_tax, bonus, bonus_rate;

    cout << "Enter your gross salary: ";
    cin >> gross_salary;
    cout << "Enter the over time bonus rate per hour: ";
    cin >> bonus_rate;
    cout << "Enter your working hour: ";
    cin >> working_hour;
    cout << "Enter tax rate: ";
    cin >> tax_rate;

    pension = gross_salary * PENSION;
    income_tax = gross_salary * tax_rate/100;

    if (working_hour > 40){
        overtime = working_hour - 40;
        bonus = overtime * bonus_rate;
        net_salary = (gross_salary - pension - income_tax) + bonus;
        cout << "Your net salary = " << net_salary << endl;
    }
    net_salary = gross_salary - pension - income_tax;

    return 0;
}
