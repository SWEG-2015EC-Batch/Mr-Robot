
Problem Analysis:


Input:
The program prompts the user to enter the desired "side" (side), which determines the height of the triangle.
Logic:
Two nested loops are used to construct the pattern:
Outer loop: This loop iterates side times, controlling the number of rows printed.
Inner loop: This loop controls the number of letters printed in each row, based on a variable j that starts at 1 and increments with each outer loop iteration.
Inside the inner loop:
The program converts the letter code k to an uppercase letter using char(64 + k).
The letter is then printed followed by a space.
After printing each row, the program increments j by 1 to increase the number of letters in the next row.
Finally, it prints a newline to move to the next line.
Output: The program prints a right-angled triangle where each row contains uppercase letters starting with 'A' and increasing in alphabetical order until reaching the current row limit. The number of letters per row increases by 1 with each new row.

   # Pseudocode:
Prompt user: Enter the "side" (side).
Initialize: Set a counter j to 1.
Outer loop: For each row i from 1 to side
Inner loop: For each letter k from 1 to j
Convert k to uppercase letter code: char(64 + k)
Print the letter and a space
Print a newline
Increment j by 1
End outer loop
Stop
