**Analysis:**
This C++ program calculates the net pay of an employee based on the provided gross salary, worked hours, over-time bonus rate, pension, and income tax. It considers different income tax rates based on the gross salary range and calculates over-time payment if the employee has worked more than 40 hours.

**Algorithm:**

1. **Input:**
   - Prompt the user to enter the gross salary of the employee.
   - Calculate the pension as 7% of the gross salary.
   - Determine the income tax based on the following conditions:
      - If gross salary is less than 200, set income tax to 0.
      - For gross salary ranges between 200 and 600, set income tax to 10% of gross salary.
      - Continue this pattern for different salary ranges with corresponding tax rates.

2. **Worked Hours:**
   - Prompt the user to enter the worked hours.
   - If the worked hours are greater than 40, prompt the user to enter the over-time bonus rate per hour.
   - Calculate the over-time payment as the product of over-time bonus rate and the difference between worked hours and 40.

3. **Net Pay Calculation:**
   - Calculate the net pay using the formula:
     ```
     NetPay = grossSalary - pension - incomeTax + overTimePayment
     ```
     - If the worked hours are not greater than 40, exclude the over-time payment.

4. **Output:**
   - Display the calculated net pay for the employee.

