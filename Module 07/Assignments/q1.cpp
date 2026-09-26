#include <iostream>
using namespace std;
void product(int *ptr, int *ptr2);
int main()
{
    int x, y;
    cout << "Enter the Firts Number: ";
    cin >> x;
    cout << "Enter the 2nd Number: ";
    cin >> y;

    int *ptr = &x;
    int *ptr2 = &x;
    product(ptr, ptr2);
}
void product(int *ptr, int *ptr2)
{
    cout<<(*ptr)*(*ptr);
}