#include <iostream>
using namespace std;
// void gun()
// {
//     return;
//     cout << "Hello vikash"<<endl;
// }
void fun(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << "hey cutie" << endl;
    fun(n - 1);
}
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    fun(n);
}