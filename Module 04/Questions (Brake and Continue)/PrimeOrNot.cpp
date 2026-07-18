#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    bool flag = true; // true means prime
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {

            flag = false; // false means prime
            break;
        }
    }
    if (n == 1)
    {
        cout << "1 is neither prime nor composite";
    }
    else if (flag == true)
    {
        cout << "it is a Prime number" << endl;
    }
    else
    {
        cout << "it is a composite number" << endl;
    }
}