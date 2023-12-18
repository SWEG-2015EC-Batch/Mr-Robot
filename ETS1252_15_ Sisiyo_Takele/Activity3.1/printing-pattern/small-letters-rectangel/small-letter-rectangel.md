
Problem Analysis:

 Input:
The program prompts the user to enter the desired number of rows (row).
The program then prompts for the desired number of columns (column).
 Logic:
Two nested loops are used to iterate through the grid dimensions:
Outer loop: This loop iterates row times, controlling the number of rows printed.
Inner loop: This loop iterates column times within each outer loop iteration, controlling the number of letters printed in each row.
Inside the inner loop:
The program converts the current column number (j) to a corresponding lowercase letter code using char(96 + j). This adds 96 to the column number because the ASCII code for 'a' is 97.
The letter is then printed followed by a space.
After each row iteration, the program prints a newline to move to the next line.
Output: The program prints a rectangular grid of lowercase letters, with rows increasing in alphabetical order from left to right and columns increasing in alphabetical order from top to bottom.
  # Pseudocode:
Prompt user: Enter the number of rows (row).
Prompt user: Enter the number of columns (column).
Outer loop: For each row i from 1 to row
Inner loop: For each column j from 1 to column
Convert j to lowercase letter code: char(96 + j)
Print the letter and a space
Print a newline
End outer loop
Stop
