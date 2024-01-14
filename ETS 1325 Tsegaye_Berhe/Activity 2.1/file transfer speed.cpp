#include <iostream>

using namespace std;

int main() {

  double bytes, time;
  cout << "This program is designed to calculate the amount of time";
  cout << "required to transmit data" << endl;
  cout << "Please enter the number of bytes: ";
  cin >> bytes;
  time= bytes/960;
  cout << "Time" << time << " seconds" << endl;
  return 0;
}
