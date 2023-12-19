1. Problem Description:

    -The given C++ code calculates the mean, variance, and standard deviation of a set of numbers without using an array. The program prompts the user to enter the 
   number of elements and then proceeds to take input of those numbers. It calculates the mean by summing up the entered numbers and dividing the sum by the total 
   number of elements. It then calculates the variance by summing up the squared differences between each number and the mean, and divides it by the total number of 
   elements. Finally, it calculates the standard deviation by taking the square root of the variance. The program outputs the input numbers, mean, and standard 
   deviation.

2. Problem analysis:

input:

   - numbers

output:

   -mean, standard devaition, variance

process:

   -read numbers
        
   -compute mean, standard devaition and variance using loops based on thier formulas.


3. Algoritm Design:

     1. start
     2. Initialize variables: n (number of elements), sum (sum of entered numbers), mean (mean of numbers), variance (variance of numbers), and stdDeviation (standard deviation of numbers).

     3. Prompt the user to enter the number of elements and store it in n.
     4. Prompt the user to enter n numbers and calculate the sum of the entered numbers. Store the sum in sum.
 
     5. Calculate the mean by dividing the sum by n and store it in mean.
     6. Reset the value of sum to 0.

     7. Prompt the user to enter n numbers again. Calculate the variance by summing up the squared differences between each number and the mean. Store the sum in variance.

     8. Divide variance by n to obtain the average variance.

     9. Calculate the standard deviation by taking the square root of the variance and store it in stdDeviation.

    10. Output the input numbers by prompting the user to enter n numbers again and printing them.
    11. stop


4. Flowchart:

 ```mermaid 
graph LR
A([Start]) --> B[/Enter the number of elements/]
B --> C[Initialize variables]
C --> D[Sum, mean, variance, stdDeviation = 0]
D --> E[Initialize counter I]
E --> F{I < n}
F --> G[Enter a number]
G --> H[Add the number to sum]
H --> I[Increment i]
I --> E
E --> J[/display mean/]
J --> K[Reset sum]
K --> L[Initialize counter I]
L --> M{I < n}
M --> N[/Enter a number/]
N --> O[Calculate variance]
O --> P[Increment I]
P --> L
L --> Q[/Calculate average variance/]
Q --> R[/Calculate standard deviation/]
R --> S([End])
```

















   







