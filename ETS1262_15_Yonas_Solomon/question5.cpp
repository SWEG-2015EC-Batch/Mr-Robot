//by reading the usser name,weekly working hours, bonus rate per hour and base salary it display name employees gross-salary,net salary and bonus payment.


#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    double weeklyHoursWorked, bonusRatePerHour, baseSalary, pensionRate = 0.05, taxRate = 0.15;
    double grossSalary, pensionAmount, taxAmount, netSalary, bonusPayment;
    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter weekly hours worked: ";
    cin >> weeklyHoursWorked;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRatePerHour;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    grossSalary = baseSalary + (weeklyHoursWorked * bonusRatePerHour);
    pensionAmount = pensionRate * grossSalary;
    taxAmount = taxRate * grossSalary;
    netSalary = grossSalary - (pensionAmount + taxAmount);
    bonusPayment = grossSalary - baseSalary;
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
    cout << "Bonus Payment: $" << bonusPayment << endl;
    return 0;
}
