// Q4. Given an array of strings. Check whether they are anagram or not.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "physicswallah";
    string t = "phywallahsics";

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout << s << endl;
    cout << t << endl;
    if (s == t)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
}
