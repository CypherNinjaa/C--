#include <iostream>

#include <string>

using namespace std;

int main()

{

    cout << is_same<int, char>::value;

    cout << is_same<char[10], char[10]>::value;

    cout << is_same<char *[10], string>::value;

    return 0;
}