   # Problem Analysis:
 Input: The program prompts the user to enter the side length of the pyramid ("side").
 Logic:
       Two nested loops are used to construct the pyramid:
      Outer loop: This loop controls the number of rows in the pyramid, iterating from the side length ("side") down to 1.
      Inner loop: This loop controls the elements printed in each row, iterating from 1 to the current row size ("j").
     The code checks the current position within the loop to determine what to print:
    First row: All positions print asterisks.
    Other rows: Only the first and last position of each row print asterisks. The rest of the loop prints spaces.
    The size of the inner loop ("j") decreases by 1 with each iteration of the outer loop, creating the inverted pyramid shape.
    Output: The program prints the resulting hollow inverted half pyramid pattern to the console.
  # Pseudocode:
Start
     Prompt user: Enter side length of the pyramid ("side")
Initialize variables:
  i: Row counter starts at 1
  j: Loop size starts at side length
  k: Element counter starts at 1
Outer loop: While side is greater than or equal to i
  Special case for first row (i == 1):
Inner loop: Iterate k from 1 to j
  Print "*"
   Increment k
   Print newline
   Decrease j by 1
  Increase i by 1
  Continue to next iteration
  Other rows:
  Inner loop: Iterate k from 1 to j
If k is 1 or equal to j (edge positions):
  Print "*"
   Increment k
  Continue to next iteration
Else:
  Print spaces
  Increment k
   Print newline
   Decrease j by 1
  Increase i by 1
  End loop
Stop
