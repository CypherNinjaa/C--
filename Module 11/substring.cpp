#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "Enter the str: ";
    getline(cin, str);
    int n = str.size();
    cout << str.substr(n/2) << endl;
}