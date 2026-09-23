#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "enteer the n: ";
    cin >> n;
    // for (int i = 1; i <=n; i++)
    // {
    //     cout << factorial(i)<<endl;
    // }
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        cout << fact << endl;
    }
}