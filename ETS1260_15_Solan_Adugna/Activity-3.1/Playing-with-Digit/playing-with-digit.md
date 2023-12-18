Problem Analysis:

The problem is to create a program that allows the user to perform various operations on a given number based on their choice. The program should provide options for reversing a number, counting its digits, calculating the sum of its digits, finding the product of even digits, swapping the first and last digit, checking if it is a palindrome, displaying the frequency of digits, checking if it is an Armstrong, Strong, or Perfect number, and exiting the program.

pseudocode:

step 1. Start the program

step 2. Initialize variables: num, reverse, temp, n, last_digit, first_digit, power, sum, product, counter, originalNum, factorial, sumOfDivisors

step 3. Display the menu with options 0 to 10

step 4. Repeat until the user chooses to exit (option 0):

step 5. Read the user's choice

step 6. Switch based on the user's choice:

  - Case 1: Reverse of a number
    - Read num
    - Set reverse = 0
    - While num > 0:
      - Calculate temp, update reverse and num
    - Display reverse
  
  - Case 2: Digit counter
    - Read num
    - Set counter = 0
    - While num > 0:
      - Calculate temp, update counter and num
    - Display counter
 
  - Case 3: Sum of digits
    - Read num
    - Set sum = 0
    - While num > 0:
      - Calculate temp, update sum and num
    - Display sum

  - Case 4: Product of even digits
    - Read num
    - Set product = 1
    - While num > 0:
      - Calculate temp, update product and num (if temp is even)
    - Display product
 
  - Case 5: Swap the first and last digit
    - Read num
    - Initialize last_digit, temp, first_digit, power
    - Calculate last_digit, temp, first_digit, power
    - Calculate swapped_num
    - Display swapped_num
 
  - Case 6: Check if a number is palindrome
    - Read num
    - Initialize reverse, temp, n
    - Calculate reverse, temp, n
    - Display result

  - Case 7: Frequency of digit
    - Read num
    - Initialize freq array
    - While num > 0:
      - Update freq array and num
    - Display frequency table

  - Case 8: Check if a number is Armstrong
    - Read num
    - Initialize originalNum, sum
    - Calculate digit, update sum and num
    - Display result
 
  - Case 9: Check if a number is Strong
    - Read num
    - Initialize originalNum, sum
    - Calculate digit, factorial, update sum and num
    - Display result
 
  - Case 10: Check if a number is Perfect
    - Read num
    - Initialize sumOfDivisors
    - Calculate sumOfDivisors, update num
    - Display result
 
  - Case 0: Exit
    - Display "Exiting program."
  - Default: Display "Invalid choice. Please try again."
step 7. End of switch

step 8. End of program
