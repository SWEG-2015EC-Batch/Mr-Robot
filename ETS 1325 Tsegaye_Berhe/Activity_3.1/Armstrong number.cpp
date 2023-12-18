
#include <iostream>
using namespace std;

int main() {
    int num, temp, cube, sum;
    do {
cout << "Enter a 3-digit number you want to check whether it's Armstrong or not (to exit enter 0):" << endl;
cin >> num;
sum = 0;
int originalNum = num;
while (num > 0) {
temp = num % 10;
cube = temp * temp * temp;
sum = sum + cube;
num = num / 10;
}
if (sum == originalNum) {
if (originalNum != 0)
cout << "The number is Armstrong." << endl;
else
cout << "Exiting..." << endl;
} else {
cout << "The number is not Armstrong." << endl;
}
} while (num != 0);
    return 0;
}
