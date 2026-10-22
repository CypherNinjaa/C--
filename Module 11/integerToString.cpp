#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x=12345678;

    string str =to_string(x);
    int n = str.size();
    cout << n << endl;
}