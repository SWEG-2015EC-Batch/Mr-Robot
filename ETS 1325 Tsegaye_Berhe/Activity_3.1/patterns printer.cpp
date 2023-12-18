#include<iostream>
using namespace std;

int main() {
    int choice, rows;
    cout << "*" << endl;
    cout << "This program is designed to print out different patterns" << endl;
    cout << "Choose the pattern you want to print" << endl;
    cout << "Enter 1 to print an alphabet rectangle" << endl;
    cout << "Enter 2 to print an alphabet triangle" << endl;
    cout << "Enter 3 to print a stars half triangle" << endl;
    cout << "Enter 4 to print a stars rectangle" << endl;
    cout << "Enter 5 to print a stars empty rectangle" << endl;
    cout << "Enter 6 to print a stars inverted triangle" << endl;
    cout << "Enter 7 to print a stars pyramid" << endl;
    cout << "Enter 8 to print a stars inverted pyramid" << endl;
    cout << "Enter 9 to print a number rectangle" << endl;
    cout << "Enter 10 to print a number half triangle" << endl;
    cout << "Enter 11 to print a number half inverted triangle" << endl;
    cout << "Enter 12 to print a number pyramid" << endl;
    cin >> choice;

    switch (choice) {
        case 1:   
for (int i = 1; i <= 5; i++) {
for (char ch = 'a'; ch <= 'e'; ch++) {
cout << ch << " ";
}
cout << endl;
}
break;
case 2:
for (char ch = 'A'; ch <= 'E'; ch++) {
for (char c = 'A'; c <= ch; c++) {
cout << c << " ";
}
cout << endl;
}
break;
case 3:
for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= i; j++) {
cout << '*';
}
cout << endl;
}
break;
        case 4:
for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= 5; j++) {
cout << "* ";
}
cout << endl;
}
break;
case 5:
for (int i = 1; i <= 5; i++) {
if (i == 1 || i == 5) {
for (int j = 1; j <= 5; j++) {
cout << "* ";
}
} else {
for (int j = 1; j <= 5; j++) {
if (j == 1 || j == 5) {
cout << "* ";
} else {cout << "  ";}
}
}
cout << endl;
}
break;
case 6:
cout << "Enter the number of rows: ";
cin >> rows;
for (int i = rows; i >= 1; --i) {
for (int j = 1; j <= i; ++j) {
cout << "* ";
}
cout << endl;
}
break;
case 7:
cout << "Enter the number of rows: ";
cin >> rows;
for (int i = 1, k = 0; i <= rows; ++i, k = 0) {
for (int space = 1; space <= rows - i; ++space) {
cout << " ";
}
while (k != 2 * i - 1) {
cout << "*";
++k;
}
cout << endl;
}
break;
case 8:
cout << "Enter the number of rows for the inverted pyramid: ";
cin >> rows;
for (int i = rows; i >= 1; --i) {
for (int space = 0; space < rows - i; ++space) {
cout << " ";}
for (int j = i; j <= 2 * i - 1; ++j) {cout << "*";}
for (int j = 0; j < i - 1; ++j) {
cout << "*";}
cout << endl;}
break;
case 9:
for (int i = 10; i <= 49; i += 10) {
for (int j = i; j < i + 10; j++) {
cout << j << " ";
}
cout << endl;
}
break;
case 10:
for (int i = 1; i <= 5; i++) {
for (int j = 1; j <= i; j++) {
cout << j;
}
cout << endl;
}
break;
case 11:
cout << "Enter the number of rows: ";
cin >> rows;
for (int i = rows; i >= 1; --i) {
for (int j = 1; j <= i; ++j) {
cout << j;
}
cout << endl;
}
break;
default:
cout << "You entered a wrong number. Please enter a number between 1 and 11" << endl;
    }
    return 0;
}
