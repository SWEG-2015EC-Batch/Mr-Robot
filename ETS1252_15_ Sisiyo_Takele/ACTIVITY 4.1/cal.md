Problem analysis:

  input:  numbers
output:
-mean, standard devaition, variance

process:
-read numbers
-compute mean, standard devaition and variance using loops based on thier formulas.
  
  #Pseudocode:
  
1. Initialize variables to store the sum of numbers, count of numbers, and sum of squared differences.
2. Prompt the user to enter a number and read it.
3. Repeat the above step until the user enters a non-numeric value.
4. Print the input numbers.
5. Calculate the mean by dividing the sum of numbers by the count of numbers.
6. Calculate the sum of squared differences by iterating through the input numbers and adding the square of the difference between each number and the mean to the sum.
7. Calculate the standard deviation by taking the square root of the sum of squared differences divided by the count of numbers.
8. Print the mean and standard deviation.
   # flow chart
   ```mermaid
   Start
Initialize sum, count, sum_of_squares
Input number
While number is numeric
    Add number to sum
    Increment count
    Add (number - mean)^2 to sum_of_squares
    Input number
End While
Print input numbers
mean = sum / count
standard_deviation = square_root(sum_of_squares / count)
Print mean, standard_deviation
End
```
