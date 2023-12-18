Analysis:
This C++ program is a basic calculator application that allows the user to perform arithmetic operations (+, -, *, /, %) on two floating-point numbers. The program utilizes a do-while loop to repeatedly prompt the user for input until they choose to exit by entering 0.

1. Initialization:
   - float num_1, num_2, result, status = 0;: Declare variables for two numbers (num_1 and num_2), the result of the operation (result), and a status indicator (status). The status variable is used to control the loop.

2. Input:
   - The user is prompted to enter two numbers (num_1 and num_2) and the type of operation (operate).

3. Arithmetic Operations:
   - A switch statement is used to perform different operations based on the value of the operate variable.
   - Cases include addition, subtraction, multiplication, division, and modulus (%).
   - Special attention is given to division and modulus to check for division by zero (num_2 != 0), preventing potential errors.

4. Output:
   - The result of the operation is displayed if it's a valid operation; otherwise, an "Invalid" message is shown.

5. Loop Control:
   - The user is asked if they want to continue (status != 0). If they enter 0, the loop exits; otherwise, it continues.

6. Error Handling:
   - If an unknown operator is entered, the program outputs an error message and prompts the user again.

Algorithm:

1. Initialize variables (num_1, num_2, result, status).
2. Enter a do-while loop to repeatedly execute the following steps:
   - Prompt the user for num_1, num_2, and operate.
   - Use a switch statement to perform the corresponding arithmetic operation.
   - Check for division or modulus by zero.
   - Display the result or an error message.
   - Ask the user if they want to continue (status != 0).
3. Exit the loop when the user enters 0.
4. Return 0 to indicate successful program execution.

**Flowchart:**
![Arth calc](https://github.com/SWEG-2015EC-Batch/Mr-Robot/assets/149063873/ac5b9174-22bd-4e19-ae6d-2fc1bd086aab)
