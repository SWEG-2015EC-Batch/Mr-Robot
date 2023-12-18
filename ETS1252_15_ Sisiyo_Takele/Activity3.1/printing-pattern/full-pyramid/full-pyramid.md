
   # Problem Analysis:


Input: The program prompts the user to enter the number of rows (rows) desired in the triangle.
Logic:
  Two nested loops are used to construct the pattern:
  Outer loop: This loop controls the number of rows, iterating from 1 to the user-input rows.
  Inner loop 1: This loop controls the number of spaces printed before the asterisks on each row, iterating from 1 to the remaining number of rows after the current row (rows - i).
  Inner loop 2: This loop controls the number of asterisks printed on each row, iterating from 0 to twice the current row number minus 1 (2 * i - 1).
  The first inner loop prints spaces to create the right-angled shape, increasing the padding with each additional row.
  The second inner loop prints asterisks, starting with one and growing wider with each successive row while staying centered by iterating up to twice the current row number minus 1.
Output: The program prints the resulting right-angled triangle pattern of asterisks, with increasing width and equal spacing,
  #Pseudocode:
Start
Prompt user: Enter the number of rows (rows)
Outer loop: For each row i from 1 to rows
Inner loop 1 (spaces):
For each space from 1 to rows - i
Print a space
Inner loop 2 (asterisks):
For each asterisk from 0 to 2 * i - 1
Print an asterisk and a space
Print a newline
End loop
Stop:
  
