#include <iostream>
using namespace std;
void change(int n, int *ptr1, int *ptr2)
{
    *ptr2 = n % 10; // last digit
    while (n > 9)
    {
        n /= 10;
    }
    *ptr1 = n;
}
int main()
{
    int n;
    cin >> n;
    int fd, ld;
    int *ptr1 = &fd;
    int *ptr2 = &ld;
    change(n, ptr1, ptr2);
    cout << "fd: " << fd << " " << "ld: " << ld;
}
