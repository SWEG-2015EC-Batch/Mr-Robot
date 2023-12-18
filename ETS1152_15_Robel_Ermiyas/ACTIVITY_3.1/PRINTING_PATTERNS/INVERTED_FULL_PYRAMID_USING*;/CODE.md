1.Problem Description: prograkm to print inverted full pyramid using*.
2.problem analysis: 

input: rows
output: pyramid
process: read rows, 
           initialize i for rows and j for column,
           i decreases until it reaches rows
           j increases until it reaches i
         
3. Algorithm design:
  1. Start
  2. Declare variable rows to store the number of rows.
  3. Take input from the user for the number of rows.
  4. Use a for loop to iterate through each row of the pyramid.
  5. Inside the for loop, use another for loop to print the spaces before the stars.
  6. Inside the inner for loop, use an if-else condition to decide whether to print a star or a space based on the position in the row.
  7. After printing all the stars and spaces in a row, move to the next line.
  8. Repeat steps 4-7 until all rows are printed.
  9. End
