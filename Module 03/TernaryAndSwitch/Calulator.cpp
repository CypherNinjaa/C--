#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char opt;
    cout << "Enter the Expression (ex: a+b): ";
    cin >> a >> opt >> b;
    switch (opt)
    {
    case '+':
        cout << "Sum: " << a + b;
        break;
    case '-':
        cout << "Subtracted: " << a - b;
        break;
    case '*':
        cout << "Multiplied: " << a * b;
        break;
    case '/':
        cout << "Divided: " << a / b;
        break;

    default:
        cout << "Invalid Input";
        break;
    }
}