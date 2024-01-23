#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cout << "Enter the number of persons: ";
    cin >> N;

    double* height = new double[N];
    double* weight = new double[N];
    double* bmi = new double[N];
    string* fullName = new string[N];

    for (int i = 0; i < N; i++) {
        cout << "Enter the height (in meters) for person " << i + 1 << ": ";
        cin >> *(height + i);

        cout << "Enter the weight (in kilograms) for person " << i + 1 << ": ";
        cin >> *(weight + i);

        *(bmi + i) = *(weight + i) / (*(height + i) * *(height + i));

        cout << "Enter the full name for person " << i + 1 << ": ";
        cin.ignore();
        getline(cin, *(fullName + i));
    }

    cout << "\nRecord:\n";
    cout << "--------------------------------------------------\n";
    cout << "Full Name\tHeight\tWeight\tBMI\n";
    cout << "--------------------------------------------------\n";

    for (int i = 0; i < N; i++) {
        cout << *(fullName + i) << "\t" << *(height + i) << "\t" << *(weight + i) << "\t" << *(bmi + i) << "\n";
    }

    delete[] height;
    delete[] weight;
    delete[] bmi;
    delete[] fullName;

    return 0;
}
