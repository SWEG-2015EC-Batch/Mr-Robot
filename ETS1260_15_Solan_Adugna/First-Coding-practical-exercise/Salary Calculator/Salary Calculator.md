A.) Problem analysis;


Input:Employee name                              
 :Weekly working hours                                    
 : Bonus rate per hour                                       
 :Base salary                                                    

Process/Operation: 
Calculate : Gross salary: Gross Salary = Base Salary + (Weekly Working Hours * Bonus Rate per Hour)
 :Pension deduction: Pension Deduction = Gross Salary * 0.05 (5% deduction) 
 :Net Salary = Gross Salary - Pension Deduction - (Gross Salary * 0.15) (15% tax deduction) 
:Bonus Payment = Weekly Working Hours * Bonus Rate per Hour Output:

Output: the employee's name
      : net salary
     : and bonus payment
  
  B.) Algorithm Design:

Pseudocode:
1 START
2 INPUT employeeName (Prompt for employee's name)
3 INPUT weeklyWorkingHours (Prompt for weekly working hours)
4 INPUT bonusRatePerHour (Prompt for bonus rate per hour)
5 INPUT baseSalary (Prompt for base salary)
6 SET grossSalary = baseSalary + (weeklyWorkingHours * bonusRatePerHour)
7 SET pensionDeduction = grossSalary * 0.05 (5% pension deduction)
8 SET taxDeduction = grossSalary * 0.15 (15% tax deduction)
9 SET netSalary = grossSalary - pensionDeduction - taxDeduction
10 SET bonusPayment = weeklyWorkingHours * bonusRatePerHour
11 DISPLAY "Employee Name: employeeName"
12 DISPLAY "Gross Salary: grossSalary"
12 DISPLAY "Net Salary: netSalary"
13 DISPLAY "Bonus Payment: bonusPayment"
14 Stop

              Flowchart

              ![question 5](https://github.com/SWEG-2015EC-Batch/Mr-Robot/assets/149063873/923f0dac-9106-46b8-94ed-60ce46333c5e)



