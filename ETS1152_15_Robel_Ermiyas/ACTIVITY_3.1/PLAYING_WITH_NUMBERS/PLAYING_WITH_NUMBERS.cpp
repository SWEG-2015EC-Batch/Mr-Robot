#include <iostream>
#include <cmath>

using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    return reversedNum;
}

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to find the sum of digits in a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}

// Function to find the product of even digits in a number
int productOfEvenDigits(int num) {
    int product = 1;
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        num /= 10;
    }
    return product;
}

// Function to find the sum of the first and last digit of a number
int sumOfFirstAndLastDigit(int num) {
    int lastDigit = num % 10;
    int firstDigit = 0;
    while (num != 0) {
        firstDigit = num % 10;
        num /= 10;
    }
    return firstDigit + lastDigit;
}

// Function to swap the first and last digit of a number
int swapFirstAndLastDigit(int num) {
    int lastDigit = num % 10;
    int firstDigit = 0;
    int temp = num;
    int power = 0;
    while (temp != 0) {
        firstDigit = temp % 10;
        temp /= 10;
        power++;
    }
    int swappedNum = lastDigit * pow(10, power - 1) + num % (int)pow(10, power - 1);
    swappedNum -= lastDigit;
    swappedNum += firstDigit;
    return swappedNum;
}

// Function to check if a number is palindrome
bool isPalindrome(int num) {
    int reversedNum = reverseNumber(num);
    return num == reversedNum;
}

// Function to find the frequency of each digit in a number
void findDigitFrequency(int num) {
    int frequency[10] = {0};
    while (num != 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << i << "\t" << frequency[i] << endl;
        }
    }
}

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    return originalNum == sum;
}

// Function to check if a number is Strong
bool isStrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num != 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    return originalNum == sum;
}

// Function to check if a number is Perfect
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << reverseNumber(num) << endl;
    cout << "Number of digits: " << countDigits(num) << endl;
    cout << "Sum of digits: " << sumOfDigits(num) << endl;
    cout << "Product of even digits: " << productOfEvenDigits(num) << endl;
    cout << "Sum of first and last digit: " << sumOfFirstAndLastDigit(num) << endl;
    cout << "Number after swapping first and last digit: " << swapFirstAndLastDigit(num) << endl;
    cout << "Is palindrome? " << (isPalindrome(num) ? "Yes" : "No") << endl;
    cout << "Digit frequency:" << endl;
    findDigitFrequency(num);
    cout << "Is Armstrong? " << (isArmstrong(num) ? "Yes" : "No") << endl;
    cout << "Is Strong? " << (isStrong(num) ? "Yes" : "No") << endl;
    cout << "Is Perfect? " << (isPerfect(num) ? "Yes" : "No") << endl;

    return 0;
}
