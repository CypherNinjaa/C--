#include <iostream>
using namespace std;
int maxthree(int a, int b, int c)
{

    if (a > b && a > c)
    {
        return a;
    }
    else if (b > c && b > a)
    {
        return a;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a = 2, b = 8, c = 10;
    cout << maxthree(a, b, c);
}