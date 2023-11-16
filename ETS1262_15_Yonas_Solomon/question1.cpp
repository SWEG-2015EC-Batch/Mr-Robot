#include<iostream>
#include<math.h>

using namespace std;
int main () {
    double height, weight, BMI;
    cout << "inter the height in meter";
    cin >> height;
    cout << "inter the weight in newton";
    cin >> weight;
    BMI = weight / pow(height, 2);
    cout << BMI;
    return 0;
}
