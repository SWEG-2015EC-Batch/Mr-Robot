
  # Problem Analysis:


Input: The program defines the number of rows (row) as a constant value of 5 (hardcoded within the code).
Logic:
Two nested loops are used to construct the pattern:
Outer loop: This loop controls the number of rows, iterating from 1 to the constant row value (1 to 5 in this case).
Inner loop: This loop controls the elements printed in each row, iterating from 1 to the current row number i.
Inside the inner loop, the current column number (j) is printed followed by a space.
After printing each row, a newline is added to move to the next line.
Output: The program prints a right-angled triangle pattern where each row contains numbers from 1 to its own row number, with the width increasing by 1 with each successive row.
  # Pseudocode:
Initialize: Set row to 5 (or desired number of rows if modifying the code)
Outer loop: For each row i from 1 to row
Inner loop: For each column j from 1 to i
Print the current column number j and a space
Print a newline
End outer loop
Stop
