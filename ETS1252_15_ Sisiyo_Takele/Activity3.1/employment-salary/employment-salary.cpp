#include <iostream>

using namespace std;

int main() {
  double grossSalary, workedHours, incomeTaxRate, overtimeBonusRate, netPay, pensionDeduction, incomeTax, overtimePayment;

 
  cout << "Enter gross salary: ";
  cin >> grossSalary;
  cout << "Enter worked hours: ";
  cin >> workedHours;
  cout << "Enter income tax rate (0.0 to 1.0): ";
  cin >> incomeTaxRate;

 
  pensionDeduction = grossSalary * 0.07;
  incomeTax = grossSalary * incomeTaxRate;

 
  netPay = grossSalary - pensionDeduction - incomeTax;

 
  if (workedHours > 40) {
    int overtimeHours = workedHours - 40;

   
    cout << "Enter overtime bonus rate per hour: ";
    cin >> overtimeBonusRate;

   
    overtimePayment = overtimeHours * overtimeBonusRate;

  
    netPay += overtimePayment;
  }

  // Display net pay
  cout << "Net pay: " << netPay << endl;

  return 0;
}
