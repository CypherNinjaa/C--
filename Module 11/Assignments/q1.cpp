// Q1.Input a string of size n and update all the odd positions in the string to character ‘#’.Consider 0 - based
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    for (int i = 1; i < str.size(); i++)
    {
        if (i % 2 == 0)
        {
            str[i] = '#';
        }
    }
    cout << str;
}