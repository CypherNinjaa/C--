#include <iostream>
using namespace std;
int main()
{
    int arr[4][2];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter roll number and marks for student "
             << i + 1 << ": ";
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nRoll No.\tMarks\n";
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << "\t\t";
        }
        cout << endl;
    }
}