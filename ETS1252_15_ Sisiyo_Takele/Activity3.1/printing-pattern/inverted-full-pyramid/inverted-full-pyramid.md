  # Problem Analysis:

Input: The program prompts the user to enter the size of the "row" (n), which essentially determines the height of the pyramid.
Logic:
Two nested loops are used to construct the pattern:
Outer loop: This loop controls the number of rows in the pyramid, iterating from 0 to n - 1.
Inner loop: This loop controls the elements printed in each row, iterating from 0 to 2 * n - i - 1.
The code uses a variable space to initially hold the current row number (i). Inside the inner loop:
If space is greater than 0, it prints a space and then decrements space. This adds spaces at the beginning of each row, creating the right-angled shape with decreasing width.
When space reaches 0, it starts printing asterisks followed by a space. This fills the remaining space with asterisks.
Output: The program prints the resulting right-angled pyramid pattern of asterisks to the console.
Pseudocode:

Start
Prompt user: Enter size of "row" (n)
Outer loop: For each row i from 0 to n - 1
Initialize space with current row number i
Inner loop: For each element j from 0 to 2 * n - i - 1
If space is greater than 0, print a space and decrease space
Else, print an asterisk and a space
Print a newline
End loop
Stop
Flowchart Algorithm:

Start
Input: Get size of "row" (n) from user
Outer loop: Loop i from 0 to n - 1
Set space: Set space equal to current row number i
Inner loop: Loop j from 0 to 2 * n - i - 1
Check space:
If space greater than 0:
Print a space
Decrease space by 1
Else (space <= 0):
Print an asterisk and a space
Print a newline
End outer loop
Stop
