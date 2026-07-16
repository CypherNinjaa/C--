#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter your Alphabet (capital letter): ";
    cin >> ch;
    int x = (int)ch;
    cout << x - 64;
}
