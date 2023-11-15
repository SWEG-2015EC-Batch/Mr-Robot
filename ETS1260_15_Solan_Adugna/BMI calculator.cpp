#include <iostream>
using namespace std;

int main()
 {
  float weight_kg, height_meters, BMI;

  cout << "Enter your weight in kg: ";
  cin >> weight_kg;

  cout << "Enter your height in meters: ";
  cin >> height_meters;

  // Calculate the BMI by dividing the weight in kg by the height in meters squared
  BMI = (weight_kg / (height_meters*height_meters));

  cout << "Body Mass Index of a person: " << BMI << endl;

  return 0;
}
