#include<iostream>
#include<ctype.h>
#include<math.h>
using namespace std;
int main()
{
    string Employee_Name, Employee_Father_Name;
    int Weekly_Working_Hours, Bonus_Rate_per_Hour, Base_Salary, Bonus_Payment, Gross_Salary;
    cout<<"Enter your Name"<<'\n';
    cin>>Employee_Name;
    cout<<"Enter your Fathers Name"<<'\n';
    cin>>Employee_Father_Name;
    cout<<"Enter your Base Salary"<<'\n';
    cin>>Base_Salary;
    cout<<"Enter your Bonus Rate per Hour"<<'\n';
    cin>>Bonus_Rate_per_Hour;
    cout<<"Enter Weekly Working Hours"<<'\n';
    cin>>Weekly_Working_Hours;
    Bonus_Payment = Weekly_Working_Hours*Bonus_Rate_per_Hour;
    Gross_Salary = Base_Salary + Bonus_Payment;
    cout<<Employee_Name<<" "<<Employee_Father_Name<<'\n';
    cout<<"Your Bonus Payment is  "<<Bonus_Payment <<'\n';
    cout<<"Your Gross Salary is  "<<Gross_Salary<<'\n';
    cout<<"Your Net Salary is  "<<Gross_Salary-(0.2*Gross_Salary)<<'\n';
    return 0;
}
