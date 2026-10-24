// Q1. Input a string and concatenate with its reverse string and print it.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    string str2 = str;
    reverse(str2.begin(), str2.end());
    str = str + str2;
    cout << str;
    return 0;
}