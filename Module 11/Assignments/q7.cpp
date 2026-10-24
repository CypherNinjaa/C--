// Q2.Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    sort(str.begin(), str.end(), greater<char>());
    int sl = -1;
    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] != str[i - 1])
        {
            sl = i;
            break;
        }
    }
    if (sl == -1)
    {
        cout << "not found";
    }
    else
    {
        cout << "second largest: " << str[sl];
    }

    return 0;
}