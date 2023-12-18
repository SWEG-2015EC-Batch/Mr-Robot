

  # Problem Analysis:

This C++ code prints a square matrix where each cell contains its own row number (j).

Input: The program prompts the user to enter the number of rows (row).
Logic:
Two nested loops are used to construct the square matrix.
Outer loop: This loop iterates for each row from 1 to the user-input row.
Inner loop: This loop iterates for each column from 1 to the user-input row.
Inside the inner loop, the current column number (j) is printed followed by a space.
After printing each row, a newline is added to move to the next line.
Output: The program prints the resulting square matrix with numbers 1 to row in each row to the console.
  # Pseudocode:

Start
Prompt user: Enter the number of rows (row)
Outer loop: For each row i from 1 to row
Inner loop: For each column j from 1 to row
Print the current column number j and a space
Print a newline
End outer loop
Stop


