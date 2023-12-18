1,Problem Discription
Program to draw rectangle with continous letter

2,Program Analysis
Input
row , colomn

process
make a row with letter starting from a to letter
repeat it for row times

Output
rectangle with letter

3, Algorithm Design:
1. Start
2. Initialize a character variable letter to 'A'.
3. Use two nested for loops to iterate through each row and column of the rectangle.
4. In the outer for loop, iterate from 1 to 4 to represent each row.
5. In the inner for loop, iterate from 1 to 6 to represent each column.
6. Inside the inner for loop, print the current value of letter followed by a space to represent the rectangle pattern.
7. Increment the value of letter by one for each iteration.
8. If the value of letter exceeds 'X', reset it to 'A'.
9. After printing all the characters in a row, move to the next line.
10. Repeat steps 4-9 until all rows and columns are printed.
11. End
