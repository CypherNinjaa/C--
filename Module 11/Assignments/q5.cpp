// Q5.Input a string of length less than 10 and convert it into integer without using builtin function.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int num = 0;

    for (int i = 0; i < str.length(); i++)
    {
        num = num * 10 + (str[i] - '0');
    }

    cout << "Integer: " << num << endl;

    return 0;
}