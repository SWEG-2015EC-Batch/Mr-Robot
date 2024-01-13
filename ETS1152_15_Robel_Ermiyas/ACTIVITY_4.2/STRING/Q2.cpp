// This program checks if a string is a palindrome or not
// by Robeil
//A C++ program that checks whether a given word is a palindrome.
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string word;
    cout << "Enter a word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }

    for (int i = 0; i < word.length() / 2; i++)
    {
        if (word[i] != word[word.length() - i - 1])
        {
            std::cout << word << " is not a palindrome" << endl;
            return 0;
        }
    }
    cout << word << " is a palindrome" << endl;
    return 0;
}
