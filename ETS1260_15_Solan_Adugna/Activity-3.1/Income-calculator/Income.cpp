//This program is used to calculate an Net-Pay of an employee
#include <iostream>
using namespace std;         

int main(){
    double NetPay, grossSalary ,workedHours ,overTimeBonusRate,
          pension, incomeTax, overTimePayment;


    cout <<"           Net-salary calculator" << endl;

    cout <<"\nPlease enter your gross salary: ";
    cin >> grossSalary;
    pension = 0.7*grossSalary;
    if (grossSalary < 200)
        incomeTax = 0;
     else if (grossSalary >= 200 && grossSalary < 600)
        incomeTax = 0.1*grossSalary;
       else if (grossSalary >= 600 && grossSalary < 1200)
        incomeTax = 0.15*grossSalary;
    else if (grossSalary >=1200 && grossSalary < 2000)
        incomeTax = 0.2*grossSalary;
    else if (grossSalary >= 2000 && grossSalary < 3500)
        incomeTax = 0.25*grossSalary;
    else
        incomeTax = 0.3*grossSalary;

    cout <<"Please enter the worked hours: ";
   cin >> workedHours;
    if (workedHours > 40) {
        cout <<"Please enter over-time bonus rate /hour: ";
        cin >> overTimeBonusRate;
        overTimePayment=(overTimeBonusRate * (workedHours-40));
        NetPay=grossSalary - pension-incomeTax + overTimePayment;
        }
        else
        NetPay=grossSalary - pension-incomeTax;

    cout <<"The Net-Pay of an employee;  " << NetPay;
    return 0;
}

