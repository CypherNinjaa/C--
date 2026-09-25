#include <iostream>
using namespace std;
int square(int n)
{
    return n * n;
}
int countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    square(count);
}

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    cout << countDigit(n);
}