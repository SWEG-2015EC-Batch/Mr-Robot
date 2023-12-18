   # problem analysis
 Input: The program requests the number of rows ("row") from the user, but this information is not directly used in the program.
Logic:
     Two nested loops are used to determine the pattern.
     The outer loop iterates from 5 down to 0 (5 is hardcoded), controlling the number of asterisks in each row.
     The inner loop iterates "j" times, where "j" is less than or equal to the current loop variable ("i"). This controls the number of times an asterisk is printed in each row.
     Each iteration of the inner loop prints an asterisk followed by a space.
Output: The program prints the resulting right-angled triangle pattern of asterisks with decreasing rows to the console.
       # Pseudocode
  Start
  Prompt user for number of rows (ignored)
  Set counter i to 5
   While i is greater than or equal to 0 5. Set counter j to 0 6. While j is less than or equal to i 7. Print "*" and a space 8. Increment j by 1 9. Print a newline 10. Decrease i by 1
  End loop
  Stop
    # Flowchart:
```mermaid
Start

|

v

(Ignored) Enter number of rows ("row")

|

v

Set counter i to 5

|

v

While i >= 0

|

|---v---+

|        | Set counter j to 0

+--------+

|

v

While j <= i

|

|---v---+

|        | Print "*" and a space

+--------+

|

v

Increment j by 1

|

v

Print newline

|

v

Decrease i by 1

|

v

End loop

|

v

Stop
```
