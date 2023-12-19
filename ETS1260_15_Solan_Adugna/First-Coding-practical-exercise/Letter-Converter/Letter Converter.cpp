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
