#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string arr[] = {"0123", "0023", "456", "00182", "940", "002901"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (stoi(arr[i]) > max)
        {
            max = stoi(arr[i]);
            maxS = arr[i];
        }
    }
    cout << maxS<<endl;
    cout << max;
}
