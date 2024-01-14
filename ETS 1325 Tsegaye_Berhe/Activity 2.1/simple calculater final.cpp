#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    char op;
    double result, num1, num2;
    int num3,num4,result2;
    cout << "******** This is a calculator ********" << "\n";
do {
cout << "Choose the operation (+, -, *, /, %) you want to perform (to exit enter '0'):" << "\n";
cin >> op;
switch (op) {
case '+':
cout << "Enter the first number:" << "\n";
cin >> num1;
cout << "Enter the second number:" << "\n";
cin >> num2;
result = num1 + num2;
cout << num1 << " + " << num2 << " = " << result << "\n";
break;
case '-':
cout << "Enter the first number:" << "\n";
cin >> num1;
cout << "Enter the second number:" << "\n";
cin >> num2;
result = num1 - num2;
cout << num1 << " - " << num2 << " = " << result << "\n";
break;
case '*':
cout << "Enter the first number:" << "\n";
cin >> num1;
cout << "Enter the second number:" << "\n";
cin >> num2;
result = num1 * num2;
cout << num1 << " * " << num2 << " = " << result << "\n";
break;
case '/':
cout << "Enter the first number:" << "\n";
cin >> num1;
cout << "Enter the second number:" << "\n";
cin >> num2;
if (num2 != 0) {
result = num1 / num2;
cout << num1 << " / " << num2 << " = " << result << "\n";
} else {
cout << "A number can't be divided by zero. Please enter a non-zero divisor." << "\n";
}
break;
case '%':
int num3, num4;
cout << "Enter the first number:" << "\n";
cin >> num3;
cout << "Enter the second number:" << "\n";
cin >> num4;
if (num4 != 0) {
 result2= num3 % num4;
cout << num3 << " % " << num4 << " = " << result2<< "\n";
} else {
cout << "A number can't be divided by zero. Please enter a non-zero divisor." << "\n";
}
break;
case '0':
cout << "Exiting..." << "\n";
break;
default:
 cout << "You have entered a wrong operation." << "\n";
cout << "Please enter one of the following operations (+, -, *, /, %, or '0' to exit)" << "\n";
break;
        }
    } while (op != '0');

    cout << "*************************" << "\n";
    return 0;
}