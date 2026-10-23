#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str = "0000123456";
    int x = stoi(str);
    cout << x << endl;

    int a = 1234567;
    string s = to_string(a);
    cout << a << endl;

    // stoll()
    string str2 = "00000123456789132442455";
    long long x2 = stoll(str2);
    cout << x2 << endl;
}
