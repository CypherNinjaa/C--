#include <iostream>
using namespace std;
void factUpto(int n)
{

    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
        cout << f << endl;
    }
}
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    // cout << fact(5);
    factUpto(5);
}