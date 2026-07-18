#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    // int i; -> garbage value
    // for (; i <= 10;)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    do
    {
        cout << i << " ";
        i++;
    } while (i <= 10);
}