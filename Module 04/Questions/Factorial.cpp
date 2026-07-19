// Print the Factorial of a given number 'n'.
#include <iostream>
using namespace std;
int main()
{
    int num, fact = 1;
    cout << "Enter the number: ";
    cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact *=i;
    // }
    while (num > 0)
    {
        fact *= num;
        num--;
    }
    cout << "Factorial: " << fact;
}