#include <iostream>
using namespace std;

void printn(int n, int i)
{
    if (i > n)
        return;
    cout << i<<endl;
    printn(n, i + 1);
}

int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    printn(n,1);
}