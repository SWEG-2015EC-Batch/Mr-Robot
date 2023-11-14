1.

#include <iostream>
using namespace std;
int main() {
    float weight, hight, BMI;
    cout <<"weight";
    cin >>weight;
    cout <<"hight";
    cin >>hight;
    BMI = weight/(hight*hight);
    cout <<"BMI="<<BMI;
    return 0;
}
2. 
    
#include <iostream>
using namespace std;
int main() {
    int milespergallon, tankcapacity;
    cout <<"tankcapacity";
    cin >>tankcapacity;
    cout <<"milespergallon";
    cin >>milespergallon;
    cout <<"This mean that you can drive"<<tankcapacity*milespergallon<< " miles on a full tank " <<endl;
    return 0;
}
