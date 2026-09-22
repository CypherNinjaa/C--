#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = fact(n) / (fact(r) * fact(n - r));
}
int permutation(int n, int r)
{
    int npr = fact(n) / (fact(n - r));
    return npr;
}
int main()
{
    int n, r, nfact;
    cout << "enter n: ";
    cin >> n;
    cout << "enter r: ";
    cin >> r;
    // nfact = 1;
    // for (int i = 2; i <= n; i++)
    // {
    //     nfact *= i;
    // }

    // int rfact = 1;
    // for (int i = 2; i <= r; i++)
    // {
    //     rfact *= i;
    // }

    // int nrfact = 1; //=>> nrfact -> (n-r)!
    // for (int i = 2; i <= n - r; i++)
    // {
    //     nrfact *= i;
    // }

    // nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n - r);

    int ncr = combination(n, r);
    int npr = permutation(n, r);
    cout << ncr << endl
         << npr;
}