#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int n = 8;
    int total = n * (n + 1) / 2;
    int x = sqrt(total);
    if (x * x == total)
    {
        cout << x;
    }
    else
    {
        cout << -1;
    }
}