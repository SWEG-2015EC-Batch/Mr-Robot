2.
// A C++ program that make simple calculator.
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    do {
        cout << "Enter operator (+, -, *, /, %): ";
        cin >> op;

        if (op == '0') {
            break;
        }

        cout << "Enter two operands: ";
        cin >> num1 >> num2;

        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
            case '%':
                cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;  
                break;
            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operator. Please try again." << endl;
                break;
        }
    } while (op != '0');

    return 0;
}
