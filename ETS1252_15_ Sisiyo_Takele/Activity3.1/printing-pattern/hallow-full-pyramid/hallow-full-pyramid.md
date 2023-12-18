
  # Problem Analysis:

Input: The program prompts the user to enter the number of rows (rows) desired in the pyramid.
Logic:
Two nested loops are used to construct the pattern:
Outer loop: This loop controls the number of rows, iterating from 0 to rows - 1.
Inner loop: This loop controls the elements printed in each row, iterating from 0 to 2 * rows - 1.
The code utilizes two variables, stars and spaces:
stars starts at 1 for each row and represents the presence of asterisks in the first and last column.
spaces starts at the number of remaining rows after the current row (rows - i - 1) and controls the amount of padding before the asterisks to achieve the right-angled shape.
Inside the inner loop:
The program checks if the current column j is 0 (first) or 2 * rows - 2 - i (last based on remaining rows and current row).
If the condition is met, an asterisk is printed, representing the outer edges of the pyramid.
Otherwise, a space is printed, creating the hollow center.
After printing each row, a newline is added to move to the next line.
Output: The program prints the resulting hollow full pyramid pattern of asterisks and spaces to the console.
  # Pseudocode:
Start
Prompt user: Enter the number of rows (rows)
Outer loop: For each row i from 0 to rows - 1
Set stars to 1 for current row
Calculate spaces as rows - i - 1 for padding
Inner loop: For each element j from 0 to 2 * rows - 1
Check columns:
If j is 0 or 2 * rows - 2 - i:
Print an asterisk
Else:
Print a space
End check
Print a newline
End outer loop
Stop
