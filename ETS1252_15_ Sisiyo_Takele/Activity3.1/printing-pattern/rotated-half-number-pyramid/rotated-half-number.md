Problem Analysis:

     Input:
User enters the desired "side" (side) of the triangle.
   Logic:
The program uses three nested loops and several variables to construct the pattern:
Outer loop: Iterates side times, controlling the number of rows printed.
Inner loop 1: Controls the printing of spaces at the beginning of each row. It iterates while a counter (spacecheker) is less than a variable (space) that starts at the user-defined side and decreases with each outer loop iteration.
Inside this loop, two spaces are printed and the spacecheker is incremented.
Inner loop 2: Controls the printing of numbers in each row. It iterates while a counter (j) is greater than 0.
Inside this loop, the current value of j is printed followed by a space. Then, j is decremented.
After the inner loop 2 completes, the value of j is reset to k + 1, where k is a copy of j before the inner loop.
Finally, a newline is printed to move to the next row.
Output: The program prints an inverted right-angled triangle pattern where each row starts with increasing spaces and then displays decreasing numbers starting from the user-defined side value.
    Pseudocode:
Prompt user: Enter the "side" (side) of the triangle.
Initialize: Set space equal to side, j and spacecheker to 1, and k to a temporary variable.
Outer loop: For each row i from 1 to side:
Inner loop 1: While spacecheker is less than space:
Print two spaces and increment spacecheker.
Reset spacecheker to 1 and decrease space.
Inner loop 2: While j is greater than 0:
Print the current value of j and a space.
Decrement j.
Set j equal to k + 1 (where k holds the previous row's starting number).
Print a newline.
End outer loop
Stop
