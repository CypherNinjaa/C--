// Q3.Input a string and return the number of substrings that contain only vowels.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int count = 0;
    int vowels = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u')
        {
            vowels++;
            count += vowels;
        }
        else
        {
            vowels = 0;
        }
    }

    cout << "Output: " << count << endl;

    return 0;
}
