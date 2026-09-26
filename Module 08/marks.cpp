#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of student: ";
    cin >> n;
    vector<int> marks(n);
    cout << "enter the marks: ";
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
        {
            cout << "Roll number: " << i + 1 << " marks: " << marks[i] << endl;
        }
    }
}