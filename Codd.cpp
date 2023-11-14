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

3.

#include <iostream> using namespace std; void lower_string(string str) {  for(int i=0;str[i]!='\0';i++)  {   if (str[i] >= 'A' && str[i] <= 'Z') //checking for uppercase characters    str[i] = str[i] + 32; //converting uppercase to lowercase  }  cout<<"\n The string in lower case: "<< str; } void upper_string(string str) {  for(int i=0;str[i]!='\0';i++)  {   if (str[i] >= 'a' && str[i] <= 'z') //checking for lowercase characters    str[i] = str[i] - 32; //converting lowercase to uppercase  }  cout<<"\n The string in upper case: "<< str; } int main() {  string str; cout<<"Enter the string "; getline(cin,str); lower_string(str); //function call to convert to lowercase  upper_string(str); //function call to convert to uppercase  return 0; }

4.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int x, y, z;
cout <<"x";
cin >>x;
cout <<"y";
cin >>y;
z = pow(x,y);
cout  <<"pow(x,y)="<<pow(x,y);
    return 0;
}

#include <iostream>
using namespace std;

float calculateGrossSalary(float baseSalary, float bonusRate, int weeklyWorkingHours) {
    float bonusPayment = bonusRate * weeklyWorkingHours;
    float grossSalary = baseSalary + bonusPayment;
    return grossSalary;
}

float calculateNetSalary(float grossSalary) {
    float pension = 0.05 * grossSalary;
    float tax = 0.15 * grossSalary;
    float netSalary = grossSalary - pension - tax;
    return netSalary;
}

float calculateBonusPayment(float bonusRate, int weeklyWorkingHours) {
    float bonusPayment = bonusRate * weeklyWorkingHours;
    return bonusPayment;
}

int main() {
    string employeeName;
    int weeklyWorkingHours;
    float bonusRate, baseSalary;

    cout << "Enter employee name: ";
    cin >> employeeName;
    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    float grossSalary = calculateGrossSalary(baseSalary, bonusRate, weeklyWorkingHours);
    float netSalary = calculateNetSalary(grossSalary);
    float bonusPayment = calculateBonusPayment(bonusRate, weeklyWorkingHours);

    cout << "Employee Name: " << employeeName << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Net Salary: " << netSalary << endl;
    cout << "Bonus Payment: " << bonusPayment << endl;

    return 0;
}

6.

6. 

#include <stdio.h>

/*#define DEBUG*/
#undef DEBUG

const int CPS = 960;            /* characters per second (transmit rate) */

const int MINUTE = 60;              /* length of one minute, in seconds */
const int HOUR   = 60 * 60;         /* length of one hour, in seconds */
const int DAY    = 60 * 60 * 24;    /* length of one day, in seconds */

int total_seconds;              /* total seconds for the transmission */

int days;                       /* how many days it took */
int hours;                      /* how many hours it took */
int minutes;                    /* how many minutes it took */
int seconds;                    /* how many seconds it took */

char line[ 100 ];               /* line of input from keyboard */

int filesize;                   /* file size in bytes */

int main() {

printf("Enter file size in bytes: ");
fgets(line, sizeof(line), stdin);
sscanf(line, "%d", &filesize);

#ifdef DEBUG
printf("DEBUG:main(): filesize is %d\n", filesize);
#endif

total_seconds = filesize / CPS;

#ifdef DEBUG
printf("DEBUG:main(): total_seconds is %d\n", total_seconds);
#endif
