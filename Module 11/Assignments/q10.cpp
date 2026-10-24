// Q5. Given a sentence ‘str’, return the word that is lexicographically maximum.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout << "enter the string: ";
    getline(cin, str);
    string maxword, word;
    stringstream ss(str);
    while (ss >> word)
    {
        if (word > maxword)
        {
            maxword = word;
        }
    }
    cout << "Lexicographically maximum word: "
         << maxword << endl;
}