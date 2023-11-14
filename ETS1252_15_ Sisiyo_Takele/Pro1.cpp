1. 
  #include <iostream>
using namespace std;
int main()
{
 int weight;
  float height,BMI;

    cout<<"Please enter your weight in kilogram";
    cin>>weight;
    cout<<"\nPlease enter your height in meter";
    cin>>height;

    BMI =weight / (height*height);
    cout<<"\nYour body mass Index is: "<<BMI;

    if (BMI>25)
    cout<<"\n\nYou are somewhat overweight.";
    else if (BMI<18.5)
    cout<<"\n\nYou are somewhat underweight.";
    else if (BMI>18.5 && BMI <25)
    cout<<"\n\nCongratulations! You are within a healthy weight range."
      return 0;
}
2. #include <iostream>
using namespace std;
int main()
{
  int milesPerGallons;

cout<<"Enter the capacity, in gallons, of an automobile fuel tank : ";

cin>>fuelTank;

cout<<"Enter the miles per gallons the automobile can be driven : ";

cin>>milesPerGallons;

cout<<"Automobile can be driven without refuelling "<<fuelTank * milesPerGallons<<" miles."<<endl;

system("pause");
return 0;
}
3
#include <iostream>
using namespace std;
int main()
{
  char letter;
    std::cout << "Enter a letter: ";
    std::cin >> letter;

    if (islower(letter)) {
        std::cout << "Uppercase equivalent: " << (char)toupper(letter) << std::endl;
    } else if (isupper(letter)) {
        std::cout << "Lowercase equivalent: " << (char)tolower(letter) << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a letter." << std::endl;
return 0;
    }
4
  #include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x,y;

    //Get input for x and y from the user
     cout <<"Enter the value of X: ";
     cin >> x;

     cout <<"Enter the value of Y: ";
     cin >> y;

     // Calculate the result of x^y using the pow()function from cmath
     double result = pow(x,y);

     // Display the result
      cout << "Result of "<< x <<" raised to the power of "<< y <<" is:" << result<< endl;

    return 0;
}
5
#include <iostream>
using namespace std;
int main()
{
 std::string name;
    int weeklyHours;
    double bonusRate, baseSalary, pensionRate, taxRate;
    double grossSalary, netSalary, bonusPayment;

    std::cout << "Enter employee name: ";
    std::cin >> name;
    std::cout << "Enter weekly working hours: ";
    std::cin >> weeklyHours;
    std::cout << "Enter bonus rate per hour: ";
    std::cin >> bonusRate;
    std::cout << "Enter base salary: ";
    std::cin >> baseSalary;

    grossSalary = baseSalary + (weeklyHours * bonusRate);
    pensionRate = 0.05;
    taxRate = 0.15;
    double pensionAmount = pensionRate * grossSalary;
    double taxAmount = taxRate * (grossSalary - pensionAmount);
    netSalary = grossSalary - (pensionAmount + taxAmount);
    bonusPayment = weeklyHours * bonusRate;

    std::cout << "Gross Salary: " << grossSalary << std::endl;
    std::cout << "Net Salary: " << netSalary << std::endl;
    std::cout << "Bonus Payment: " << bonusPayment << std::endl;
return 0;
}
6
#include <iostream>

int main() {
    int transmissionRate = 960; // characters per second
    int fileSize = 419430400; // file size in bytes

    double timeInSeconds = fileSize / transmissionRate;
    double timeInMinutes = timeInSeconds / 60;
    double timeInHours = timeInMinutes / 60;
    double timeInDays = timeInHours / 24;

    std::cout << "Time to send the file:" << std::endl;
    std::cout << "Seconds: " << timeInSeconds << std::endl;
    std::cout << "Minutes: " << timeInMinutes << std::endl;
    std::cout << "Hours: " << timeInHours << std::endl;
    std::cout << "Days: " << timeInDays << std::endl;

    return 0;
}
  
