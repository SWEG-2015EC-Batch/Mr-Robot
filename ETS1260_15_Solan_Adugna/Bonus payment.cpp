#include <iostream>
using namespace std;
int main()
{
 std::string name;
    int weeklyHours;
    double bonusRate, baseSalary, pensionRate, taxRate;
    double grossSalary, netSalary, bonusPayment;

    std::cout << "Enter employee name: ";
    std::cin >> name;
    std::cout << "Enter weekly working hours: ";
    std::cin >> weeklyHours;
    std::cout << "Enter bonus rate per hour: ";
    std::cin >> bonusRate;
    std::cout << "Enter base salary: ";
    std::cin >> baseSalary;

    grossSalary = baseSalary + (weeklyHours * bonusRate);
    pensionRate = 0.05;
    taxRate = 0.15;
    double pensionAmount = pensionRate * grossSalary;
    double taxAmount = taxRate * (grossSalary - pensionAmount);
    netSalary = grossSalary - (pensionAmount + taxAmount);
    bonusPayment = weeklyHours * bonusRate;

    std::cout << "Gross Salary: " << grossSalary << std::endl;
    std::cout << "Net Salary: " << netSalary << std::endl;
    std::cout << "Bonus Payment: " << bonusPayment << std::endl;
return 0;
}
