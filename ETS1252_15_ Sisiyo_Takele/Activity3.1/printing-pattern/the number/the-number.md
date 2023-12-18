
   #  Problem Analysis:
This C++ program iterates through two loops and prints a sequence of two-digit numbers in a grid format.

Input:
The program does not explicitly take any input from the user.
Logic:
Two nested loops are used:
Outer loop: This loop iterates 4 times (i from 1 to 4), controlling the number of rows printed.
Inner loop: This loop iterates 10 times within each outer loop iteration (j from 0 to 9), controlling the number of columns printed and the digit sequence.
Inside the inner loop:
The program creates a two-digit number by multiplying the outer loop counter i (representing the tens digit) by 10 and adding the inner loop counter j (representing the units digit).
This two-digit number is then printed followed by a space.
After each inner loop iteration:
The inner loop counter (j) is reset to 0.
After each outer loop iteration:
A newline character is printed to move to the next row.
The inner loop counter (j) is reset to 0 again.
Output: The program prints 4 rows, each containing 10 two-digit numbers starting from 10 and increasing sequentially to 39 (4 lines of increasing sequences from 10 to 19, 20 to 29, 30 to 39).
   # Pseudocode:
Initialize: Set i to 1 and j to 0.
Outer loop: For each row i from 1 to 4:
Inner loop: While j is less than or equal to 9:
Calculate the two-digit number: (i * 10) + j.
Print the calculated number and a space.
Increment j by 1.
Print a newline.
Reset j to 0.
End outer loop
Stop
