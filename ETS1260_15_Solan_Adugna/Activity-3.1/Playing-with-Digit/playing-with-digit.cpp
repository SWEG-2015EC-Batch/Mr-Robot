#include <iostream>
using namespace std;

int main() {
   char choice;

        cout << "What do you want to see"<<endl;
        cout << "Enter a to Prints the reverses of the number"<<endl;
        cout << "Enter b to Counts the number of digits in a given number"<<endl;
        cout << "Enter c to Find the sum of the digits of the a given number"<<endl;
        cout << "Enter d to Find the product of even digits of the a given number"<<endl;
        cout << "Enter e to Prints the first and the last digit of the number and find their sum"<<endl;
        cout << "Enter f to Swap the first and the last digit of the number"<<endl;
        cout << "Enter g to Check whether a number is palindrome or not."<<endl;
        cout << "Enter h to Find the frequency of each digit in a given integer"<<endl;
        cout << "Enter i to Check if a number is Armstrong or not"<<endl;
        cout << "Enter j to Check if a number is Strong or not."<<endl;
        cout << "Enter k to Check whether a number is Perfect number or not"<<endl;


        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a': {
                // Reverse of a number
                int num, reverse = 0, temp;
                cout << "Enter the number you want to reverse: ";
                cin >> num;

                while (num > 0) {
                    temp = num % 10;
                    reverse = (reverse * 10) + temp;
                    num = num / 10;
                }

                cout << "The reverse of the number is: " << reverse << endl;
                break;
            }

            case 'b': {
                // Digit counter
                int num, temp, counter = 0;
                cout << "Enter a number: ";
                cin >> num;

                while (num > 0) {
                    temp = (num % 10);
                    temp = 1;
                    counter += temp;
                    num = num / 10;
                }

                cout << "The number of digits is " << counter << endl;
                break;
            }

            case 'c': {
                // Sum of digits
                int num, temp, sum = 0;
                cout << "Enter a number: ";
                cin >> num;

                while (num > 0) {
                    temp = (num % 10);
                    sum += temp;
                    num = num / 10;
                }

                cout << "The sum of digits is " << sum << endl;
                break;
            }

            case 'd': {
                // Product of even digits
                int num, temp, product = 1;
                cout << "Enter a number: ";
                cin >> num;

                while (num > 0) {
                    temp = (num % 10);

                    if (temp % 2 == 0) {
                        product *= temp;
                    }

                    num = num / 10;
                }

                cout << "The product of even digits is " << product << endl;
                break;


}
case 'e':{
    int number;
    std::cin >> number;

    // Find the first and last digits
    int lastDigit = number % 10;

    while (number >= 10) {
        number /= 10;
    }

    int firstDigit = number;

    // Calculate and print the sum
    int sum = firstDigit + lastDigit;
    std::cout << "First digit: " << firstDigit << std::endl;
    std::cout << "Last digit: " << lastDigit << std::endl;
    std::cout << "Sum of first and last digits: " << sum << std::endl;
break;
}
case 'f': {
                // Swap the first and last digit
                int num;
                cout << "Enter a number: ";
                cin >> num;

                int last_digit, temp = num, first_digit, power = 1;

                last_digit = num % 10;
                temp = num;

                while (temp > 0) {
                    first_digit = temp % 10;
                    temp = temp / 10;
                    power = power * 10;
                }
                power = power / 10;

                int swapped_num = last_digit * power + num % (power);
                swapped_num = swapped_num - last_digit + first_digit;

                cout << "Number after swapping first and last digit: " << swapped_num << endl;
                break;
            }

            case 'g': {
                // Check if a number is palindrome
                int num, reverse = 0, temp, n;
                cout << "Enter a number: ";
                cin >> num;

                n = num;
                while (n > 0) {
                    temp = n % 10;
                    reverse = (reverse * 10) + temp;
                    n = n / 10;
                }

                if (reverse == num) {
                    cout << "The number is palindrome." << endl;
                } else {
                    cout << "The number is not palindrome." << endl;
                }
                break;
            }

            case 'h': {
                // Frequency of digit
                int num, freq[10] = {0};
                cout << "Enter a number with a minimum of 9 digits: ";
                cin >> num;

                while (num > 0) {
                    freq[num % 10]++;
                    num /= 10;
                }

                cout << "Number" << "\t" << "Frequency" << endl;

                for (int i = 0; i < 10; i++) {
                    if (freq[i] != 0) {
                        cout << i << "\t" << freq[i] << endl;
                    }
                }
                break;
            }

            case 'i': {
                // Check if a number is Armstrong
                int num, originalNum, sum = 0;
                cout << "Enter a number: ";
                cin >> num;

                originalNum = num;

                while (num > 0) {
                    int digit = num % 10;
                    sum += digit * digit * digit;
                    num /= 10;
                }

                if (originalNum == sum) {
                    cout << "The number is an Armstrong number." << endl;
                } else {
                    cout << "The number is not an Armstrong number." << endl;
                }
                break;
            }

            case 'j':{

                int num;
                cout << "Enter a number: ";
                cin >> num;

                int originalNum = num;
                int sum = 0;

                while (num > 0) {
                    int digit = num % 10;
                    int factorial = 1;

                    for (int i = 1; i <= digit; ++i) {
                        factorial *= i;
                    }

                    sum += factorial;
                    num /= 10;
                }

                if (originalNum == sum) {
                    cout << "The number is a Strong number." << endl;
                } else {
                    cout << "The number is not a Strong number." << endl;
                }
                break;
            }

            case 'k': {
                // Check if a number is Perfect
                int num;
                cout << "Enter a number: ";
                cin >> num;

                int sumOfDivisors = 0;

                for (int i = 1; i <= num / 2; ++i) {
                    if (num % i == 0) {
                        sumOfDivisors += i;
                    }
                }

                if (sumOfDivisors == num) {
                    cout << "The number is a Perfect number." << endl;
                } else {
                    cout << "The number is not a Perfect number." << endl;
                }
                break;
            }



            default:
                cout << "Invalid choice. Please try again.\n";
        }

    return 0;
}

