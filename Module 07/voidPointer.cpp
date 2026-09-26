#include <iostream>
using namespace std;
int main()
{
    // A void pointer (void*) is a generic pointer that can store the address of any data type.
    int x = 10;
    void *ptr = &x;
    cout << *(int *)ptr;
}