// This C++ program print mean, variance and stanard devaition with out using array.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    double sum = 0, mean = 0, variance = 0, stdDeviation = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        sum += num;
    }

    mean = sum / n;

    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        variance += pow(num - mean, 2);
    }

    variance /= n;
    stdDeviation = sqrt(variance);

    cout << "Input numbers: ";
    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        cout << num << " ";
    }

    cout << "\nMean: " << mean << endl;
    cout << "Standard Deviation: " << stdDeviation << endl;

    return 0;
}
