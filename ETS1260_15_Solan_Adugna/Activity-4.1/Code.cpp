#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
     cout<<"Enter size of numbers you want to enter"<<endl;
    cin >> n;
    double sum = 0;
    double data;
    double squaredSum = 0, dataSum = 0;

    for (int i = 0; i < n;++i){
        cout<<"Enter data: ";
        cin >> data;
        dataSum += data;
        squaredSum += pow(data, 2);
    }
    double mean = dataSum / n;
    double sd = sqrt((squaredSum - (pow(dataSum, 2)) / n) / (n - 1));
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << sd << endl;
}

