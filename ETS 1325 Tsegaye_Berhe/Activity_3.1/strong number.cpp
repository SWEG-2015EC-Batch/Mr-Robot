#include<iostream>
using namespace std;
int main() {
  int num, temp, factorial, sum = 0;
 cout << "Enter the number you want to check for its strong number:" << endl;
cin >> num;
int originalNum = num;
while (num > 0) {
temp = num % 10;
factorial = 1;
for (int i = 1; i <= temp; i++) {
factorial *= i;
}
sum += factorial;
num = num / 10;
}
if (sum == originalNum) {
cout << "The number is a strong number." << endl;
} else {
cout << "The number is not a strong number." << endl;
}
    return 0;
    }