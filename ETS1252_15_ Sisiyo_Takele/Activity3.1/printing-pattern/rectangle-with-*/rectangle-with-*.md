   # Problem Analysis:


Input:
User enters the desired number of columns (column) for the rectangle.
User enters the desired number of rows (row) for the rectangle.
Logic:
Two nested loops are used to control the printing of asterisks:
Outer loop: Iterates row times, controlling the number of rows printed.
Inner loop: Iterates column times within each outer loop iteration, controlling the number of asterisks printed in each row.
Inside the inner loop, an asterisk ("*") followed by a space is printed.
After printing each row, a newline character is printed to move to the next line.
Output: The program prints a rectangular box of asterisks with the dimensions specified by the user.
   # Pseudocode:
Prompt user: Enter the number of columns (column) for the box.
Prompt user: Enter the number of rows (row) for the box.
Outer loop: For each row i from 0 to row - 1 (exclusive):
Inner loop: For each column j from 0 to column - 1 (exclusive):
Print an asterisk ("*") and a space.
Print a newline character.
End outer loop
Stop
