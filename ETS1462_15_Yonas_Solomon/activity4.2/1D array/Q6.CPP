/*A C++ program that allows the user to enter a list of numbers. 
The program will store these numbers in a vector. The user can stop entering numbers by inputting -1. After that, 
the program will print the even numbers in reverse order.*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers;
    int num;
  cout << "Enter numbers (enter -1 to stop):" << endl;
   while (true) {
        cin >> num;
        if (num == -1) {
            break;
        }
        numbers.push_back(num);
    }
  cout << "Even numbers in reverse order:" << std::endl;
   for (int i = numbers.size() - 1; i >= 0; i--) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }

    cout << endl;
  return 0;
}
