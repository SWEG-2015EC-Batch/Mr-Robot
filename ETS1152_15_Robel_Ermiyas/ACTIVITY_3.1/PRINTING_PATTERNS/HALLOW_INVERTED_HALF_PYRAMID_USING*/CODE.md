Program descriptoion:
This program print inverted half pyramid using*.


2. Problem Analysis: 
input: rows
output: hallow inverted half pyramid
process: read rows
         use for loop to print the pyramid




3. Algorithm Design:

1. Start by including the necessary header file iostream for input/output operations and using the std namespace.
2.In the main function:
    Declare integer variables number, i, j, and h to represent the input number, loop counters, and a temporary variable respectively.
    Prompt the user to enter a number and store it in the variable number.
3. Print the first row:
   Use a loop to iterate from i = 0 to i < number.
   Print an asterisk (*) followed by a space.
4. Start the loop for the remaining rows:
   Use a loop to iterate from i = number to i >= 1, decrementing i by 1 in each iteration.
   Inside the outer loop, use another loop to iterate from j = 0 to j < number - i.
   Inside the inner loop, use a while loop to print the asterisks and spaces:
   While h is not equal to (2 * i - 1), perform the following steps:
        If h is equal to 0 or h is equal to 2 * i - 2, print an asterisk (*).
        Otherwise, print a space.
        Increment h by 1.
   Reset the value of h to 0.
   Print a newline character to move to the next line.
5. End the program by returning 0.
