               Analysis
Input: The program prompts the user for test results, quiz results, project results, assignment results, and final exam results, each with specific maximum values. The input is validated to ensure it falls within the specified range.

Process: The program calculates the total score by summing up the individual scores. It then determines the lettered grade based on predefined grade ranges.

Output: The program displays the calculated lettered grade based on the total score.

              Algorithm Design (Pseudocode)
Display "Grade Calculator" title

Display "------------------------------------------------------------------" separator

Declare variables: test, quiz, project, assignment, final, total

Repeat the following steps for each category of results (test, quiz, project, assignment, final): a. Prompt user for input: "Please enter your [category] results out of [maximum value]: "

b. Read user input and store it in the corresponding variable (e.g., test)

c. Validate input: If input is greater than the specified maximum value, display an error message and repeat step b

Calculate total = test + quiz + project + assignment + final

Determine lettered grade based on total: a. If total >= 90, display "Your grade is: A+"

b. Else if total >= 80, display "Your grade is: A"

c. Else if total >= 75, display "Your grade is: B+"

d. Else if total >= 60, display "Your grade is: B"

e. Else if total >= 55, display "Your grade is: C+"

f. Else if total >= 45, display "Your grade is: C"

g. Else if total >= 30, display "Your grade is: D"

h. Else, display "Your grade is: F"

Display "Thank you for using the program."

End
  # flow chart
  ```mermaid
flowchart TD
  A[Start] --> B[Enter number of students (n)];
B --> C{n > 0 and n <= 100?};
C -->|Yes| D[Loop for each student (i = 1; i <= n; i++)];
C -->|No| E[Error - Invalid number of students];
E --> F[Stop];

D --> G[Person-i];
G --> H[test: Enter test mark (15%)];
H --> I{Test mark valid (0-15)?};
I -->|Yes| J[total += test; goto G];
I -->|No| K[Error - Invalid test mark];
K -->|L| G;

J --> M[quiz: Enter quiz mark (5%)];
M --> N{Quiz mark valid (0-5)?};
N -->|Yes| O[total += quiz; goto G];
N -->|No| P[Error - Invalid quiz mark];
P -->|L| G;

O --> Q[project: Enter project mark (20%)];
Q --> R{Project mark valid (0-20)?};
R -->|Yes| S[total += project; goto G];
R -->|No| T[Error - Invalid project mark];
T -->|L| G;

S --> U[assignment: Enter assignment mark (10%)];
U --> V{Assignment mark valid (0-10)?};
V -->|Yes| W[total += assignment; goto G];
V -->|No| X[Error - Invalid assignment mark];
X -->|L| G;

W --> Y[final_exam: Enter final exam mark (50%)];
Y --> Z{Final exam mark valid (0-50)?};
Z -->|Yes| AA[total += final_exam; calculate total Marks];
Z -->|No| AB[Error - Invalid final exam mark];
AB -->|L| G;

AA --> AC{Total marks valid (0-100)?};
AC -->|Yes| AD[Grade based on total marks];
AC -->|No| AE[Error - Invalid total marks];
AE -->|L| G;

AD --> AF[A+ (Total >= 90)];
AF -->|Yes| AG[Print total and grade, Stop];
AF -->|No| AH[A (Total >= 80)];
AH -->|Yes| AG;
AH -->|No| AI[B+ (Total >= 75)];
AI -->|Yes| AG;
AI -->|No| AJ[B (Total >= 60)];
AJ -->|Yes| AG;
AJ -->|No| AK[C+ (Total >= 55)];
AK -->|Yes| AG;
AK -->|No| AL[C (Total >= 45)];
AL -->|Yes| AG;
AL -->|No| AM[D (Total >= 30)];
AM -->|Yes| AG;
AM -->|No| AN[F (Total < 30)];
AN -->|Yes| AG;
AN -->|No| AO[Print error - Invalid grade, Stop];
```
